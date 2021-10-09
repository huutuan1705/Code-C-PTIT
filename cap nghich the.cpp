#include<stdio.h>
int main()
{
    int n,d=0;
    long long a[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%lld",&a[i]);
    for (int i=0;i<n-1;i++){
        for (int j=i;j<n;j++)
            if (i<j && a[i]>a[j]) d++;
    }
    printf("%d",d);
}
