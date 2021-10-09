#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        long long n;
        scanf("%lld",&n);
        long long d=0,m=n;
        while (m>0)
        {
            d = d*10 + m%10;
            m /=10;
        }
        if (d==n) printf("YES\n");
        else printf("NO\n");
    }
}
