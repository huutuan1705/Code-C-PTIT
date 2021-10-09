#include<stdio.h>
long long ucln (long long a,long long b)
{
	if (a==0||b==0) return a+b;
	return ucln(b%a,a);
}
long long BCNN(long long a, long long b){
    return (a*b)/ucln(a,b);
}

long long BCNN_so(long long n){
        if (n==1) return n;
        long long temp = BCNN(1,2);
        for(long long i=3;i<=n;i++){
            temp = BCNN(temp, i);
        }
        return temp;
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",BCNN_so(n));
    }
}
