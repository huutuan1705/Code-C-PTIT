#include<stdio.h>
#include<math.h>
int snt(long n)
{
    if(n<2)
        return 0;
    long i;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
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
        if(snt(a)==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
