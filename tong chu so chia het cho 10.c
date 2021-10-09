#include<stdio.h>
int tcs(long n)
{
    int t=0;
    while(n>0)
    {
        t += n%10;
        n = n/10;
    }
    return t;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        long a;
        scanf("%ld",&a);
        if (tcs(a)%10==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
