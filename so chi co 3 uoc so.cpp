#include<stdio.h>
#include<math.h>
int isPrime(long long n)
{

    if (n < 2)
        return 0;
    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long L,R;
        scanf("%lld%lld",&L,&R);
        int d=0, a = sqrt(L), b = sqrt(R);
        if (a<=b){
            for(int i=a;i<=b;i++){
                if(isPrime(i))	d++;
            }
            printf("%d\n",d);
        }
        else{
            for(int i=b;i<=a;i++){
                if(isPrime(i))	d++;
            }
            printf("%d\n",d);
        }
    }
}
