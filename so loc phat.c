#include<stdio.h>
int slp(long n)
{
    while(n > 0) {
        int t = n % 10;
        if (t != 0 && t != 6 && t != 8)
            return 0;
    n = n / 10;
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    int i;
    for (i=1;i<=a;i++)
    {
        long n;
        scanf("%ld",&n);
        if (slp(n)==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
