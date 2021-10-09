#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    long long s=0,t=1;
    for (i=1;i<=n;i++)
        {
            t *= i;
            s += t;
        }
    printf("%lld",s);
}
