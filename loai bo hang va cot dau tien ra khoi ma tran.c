#include<stdio.h>
void xuat(int a[][10],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        int n,m,a[10][10],j,k;
        scanf("%d%d",&n,&m);
        for (j=0;j<n;j++)
            for (k=0;k<m;k++)
                scanf("%d",&a[j][k]);
        printf("Test %d:\n",i);
        for (j=0;j<n;j++)
            for (k=0;k<m-1;k++)
                a[j][k] = a[j][k+1];
            m--;
        for (j=0;j<n-1;j++)
            for (k=0;k<m;k++)
                a[j][k]=a[j+1][k];
            n--;
        xuat(a,n,m);
    }
}
