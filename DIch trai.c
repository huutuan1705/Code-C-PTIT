#include<stdio.h>
int main()
{
    int n,b[100],a,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    scanf("%d",&a);
    for (i=a;i<n;i++)
        printf("%d ",b[i]);
    for (i=0;i<a;i++)
        printf("%d ",b[i]);
}
