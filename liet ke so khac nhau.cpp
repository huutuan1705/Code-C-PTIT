#include<stdio.h>

int main()
{
    int a[1000],b[1001] = {0}, n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<n;i++) b[a[i]]++;
    for (int i=0;i<=1000;i++) if (b[i]>0) printf("%d ",i);
}
