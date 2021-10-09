#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j,dem=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            if (a[i]==a[j])
    {
        if (j<i) break;
        if (j>i)
        {
            dem++;
            b[dem] = a[i];
            break;
        }
    }
    printf("%d\n",dem);
    for (i=1;i<=dem;i++)
        printf("%d ",b[i]);
    return 0;
}
