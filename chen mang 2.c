#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        int n,m,p,a[100],b[100],j;
        scanf("%d%d%d",&n,&m,&p);
        for (j=0;j<n;j++)
            scanf("%d",&a[j]);
        for (j=0;j<m;j++)
            scanf("%d",&b[j]);
        printf("Test %d:\n\n",i);
        for (j=0;j<p;j++)
            printf("%d ",a[j]);
        for (j=0;j<m;j++)
            printf("%d ",b[j]);
        for (j=p;j<n;j++)
            printf("%d ",a[j]);
    }
}
