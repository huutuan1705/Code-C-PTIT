#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        int dem;
        printf("%lld = ",n);
        for(int i = 2; i <= n; i++){
            dem = 0;
            while(n % i == 0){
                ++dem;
                n /= i;
            }
            if(dem){
                if(dem > 1) printf("%d^%d", i, dem);
                else printf("%d^1", i);
                if(n > i) printf(" * ");
            }
        }
        printf("\n");
    }
}
