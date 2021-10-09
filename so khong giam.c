#include<stdio.h>
int skg(long long n)
{
    int d;
    while (n>=10)
        {
            d = n%10;
            n = n/10;
            if (d<n%10)
                return 0;
        }
    return 1;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        long long n;
        scanf("%lld",&n);
        if (skg(n)==1) printf("YES\n");
        else printf("NO\n");
    }
}
