#include<stdio.h>
int utc(long long n)
{
    if ((n%10)%2!=0) return 0;
    int chan = 0, le = 0;
    while(n>0){
        if ((n%10)%2==0) chan++;
        else le++;
        n=n/10;
    }
    if (chan>le) return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        if (utc(n)) printf("YES\n");
        else printf("NO\n");
    }
}
