#include<stdio.h>
int A[100001], B[100001], C[100001], D[100001];
void sapxep (int a[], int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    for (int i=0;i<n;i++) scanf("%d",&A[i]);
    for (int i=0;i<m;i++) scanf("%d",&B[i]);
    for (int i=0;i<k;i++) scanf("%d",&C[i]);

    int i = 0, j = 0,d=0;
    while(i<n && j<m){
        if (A[i]==B[j]){
            printf("%d ",A[i]);
            i++;j++;
        }
        else if (A[i]>A[j]) j++;
        else i++;
    }

}
