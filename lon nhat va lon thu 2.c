#include<stdio.h>
int main()
{
    int n,a[100];
    int i,j,d;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            if (a[j]<a[i])
        {
            d = a[i];
            a[i] = a[j];
            a[j] = d;
        }
    for (i=0;i<n;i++)
    {
        if (a[i]<a[0])
        {
            printf("%d %d",a[0],a[i]);
            break;
        }
    }
    return 0;
}
