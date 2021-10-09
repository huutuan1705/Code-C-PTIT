#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        int n,a[100],j;
        scanf("%d",&n);
        for (j=0;j<n;j++)
            scanf("%d",&a[j]);
        int max = a[0];
        for (j=0;j<n;j++)
            if (a[j]>max) max = a[j];
        printf("%d\n",max);
        for (j=0;j<n;j++)
            if (a[j]== max) printf("%d ",j);
        printf("\n");
    }
    return 0;
}
