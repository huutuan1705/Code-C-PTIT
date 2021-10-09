#include<stdio.h>
void sdc (long n)
{
        int t = n%10;
        int a = 0,b;
        while(n>0)
        {
            b = n%10;
            a=b;
            n = n/10;
        }
        if (a==t) printf("YES");
        else printf("NO");
}
int main()
{
    int n;
    scanf("%d ",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        long a;
        scanf("%ld",&a);
        sdc(a);
        printf("\n");
    }
    return 0;
}
