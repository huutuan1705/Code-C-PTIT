#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,d=0;
        scanf("%lld",&n);
        while(n>0){
            if ((n%10)%2!=0){
                d++;
            }
            n=n/10;
        }
        if (d==0) printf("YES\n");
        else printf("NO\n");
    }
}
