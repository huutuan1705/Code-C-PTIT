#include<stdio.h>
int main()
{
    int n,b[100],a,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    scanf("%d",&a);
    for (i=(n-a);i<n;i++)
        printf("%d ",b[i]);
    for (i=0;i<(n-a);i++)
        printf("%d ",b[i]);
}

