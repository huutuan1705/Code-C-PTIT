#include<stdio.h>
int A[100][100], B[50][50], n,m;
void in ()
{
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
}

void tichchap (int x, int y)
{
    int i,j;
    for (int i=0;i<m;i++)
        for (int j=0;j<m;j++) A[i+x*m][j+y*m] *= B[i][j];
}

int main()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++) scanf("%d",&A[i][j]);
    scanf("%d",&m);
    for (int i=0;i<m;i++)
        for (int j=0;j<m;j++) scanf("%d",&B[i][j]);
    for (int i=0;i<n/m;i++)
        for (int j=0;j<n/m;j++) tichchap(i,j);
    in();
}
