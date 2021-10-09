#include<stdio.h>
long long a[1000000];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,Max,s=0,ktd = 0;
        scanf("%lld",&n);
        for (long long i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if (a[i]>0) ktd=1;
            if (i==0) Max = a[0];
            else
                if (Max<a[i]) Max = a[i];
        }
        if (ktd==0) printf("%lld\n",Max);
        else {
            for (long long i=0;i<n;i++){
            if (s+a[i]<0){
                s = 0;
                continue;
            }
            s+=a[i];
            if (Max<s) Max = s;
        }
        printf("%lld\n",Max);
        }
    }
}
