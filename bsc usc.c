#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        long long x,y,a,b;
    scanf("%lld%lld",&a,&b);
    x=a;y=b;
    while(a!=b)
    {
        if (a>b)
            a -= b;
        else b -= a;
    }
    printf("%lld %lld\n",(x*y)/a,a);
    }
}
