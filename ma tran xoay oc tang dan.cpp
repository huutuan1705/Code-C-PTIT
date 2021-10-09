#include<stdio.h>
int F[1000], n;
void in (int a[100][100], int n, int m)
{
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void xoayoc (int n)
{
    int a[100][100], i,b=0,d=0;
    while(b<=n/2){
        for (i=b;i<n-b;i++) a[b][i] = F[d++];
        for (i = b+1;i<n-b;i++) a[i][n-b-1] = F[d++];
        for (i = n-b-2;i>=b;i--) a[n-b-1][i] = F[d++];
        for (i = n-b-2;i>b;i--) a[i][b] = F[d++];
        b++;
    }
    in(a,n,n);
}

void sapxep()
{
    int i,j,t;
    for (i=0;i<n*n-1;i++){
        for (j=i+1;j<n*n;j++)
        if (F[i]>F[j]){
            t = F[i]; F[i] = F[j]; F[j] = t;
        }
    }
}

int main()
{
    int a[100][100];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
    int i,j,t,d=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++){
            F[d] = a[i][j];
            d++;
        }
    sapxep();
    xoayoc(n);
}
