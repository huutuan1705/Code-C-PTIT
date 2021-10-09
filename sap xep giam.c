#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a[1000];
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    int d;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            if (a[j]<a[i])
        {
            d = a[i];
            a[i] = a[j];
            a[j] = d;
        }
    for (k=0;k<n;k++)
        printf("%d ",a[k]);
}

