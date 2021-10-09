#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        int a[100];
        int j;
        for (j=0;j<x;j++)
            scanf("%d",&a[j]);
        for (j=0;j<x;j++)
            if (a[j]%2==0) printf("%d ",a[j]);
        printf("\n");
    }
}
