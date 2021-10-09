#include<stdio.h>
int sg (int n)
{
    int a = n%10;
    n = n/10;
    while(n>0){
        if (a>=(n%10)) return 0;
        a = n%10;
        n=n/10;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,d=0;
        scanf("%lld%lld",&a,&b);
        for (int i=a;i<=b;i++)
            if (sg(i)) d++;
        printf("%d\n",d);
    }
}
