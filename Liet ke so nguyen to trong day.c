#include<stdio.h>
int snt(int n)
{
    if (n<2)
        return 0;
    int i;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,a[100];
    scanf("%d",&n);
    int i,j,k;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    int d=0;
    for (j=0;j<n;j++)
    {
        if (snt(a[j])==1)
        {
            d++;
        }
    }
    printf("%d ",d);
    for (k=0;k<n;k++)
    {
        if (snt(a[k])==1)
        {
            printf("%d ",a[k]);
        }
    }
    return 0;
}
