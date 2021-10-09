#include<stdio.h>
int stn(long long n)
{
    long long d=0,m=n;
        while (m>0)
        {
            d = d*10 + m%10;
            m /=10;
        }
        if (d==n) return 1;
        return 0;
}
int thuan_le(long long n)
{
    int s=0;
    while(n>0){
        if ((n%10)%2==0) return 0;
        s+=n%10;
        n=n/10;
    }
    if (s%2==0) return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        if (stn(n) && thuan_le(n)) printf("YES\n");
        else printf("NO\n");
    }
}
