#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],i,x;
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<m;i++)
        scanf("%d",&b[i]);
    scanf("%d",&x);
    for (i=0;i<x;i++)
        printf("%d ",a[i]);
    for (i=0;i<m;i++)
        printf("%d ",b[i]);
    for (i=x;i<n;i++)
        printf("%d ",a[i]);
}
