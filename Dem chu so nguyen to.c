#include<stdio.h>
#include<math.h>
int snt(long long n)
{
    if (n<2) return 0;
    int i;
    for (i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}

int main()
{
    int a[20],k=0,i,j,b[20];
    long long n;
    scanf("%lld",&n);
    while (n>0)
    {
        a[k] = n%10;
        n=n/10;
        k++;
    }
    for(i = 0;i < 20; i++) b[i] = 0;
    for(i = 0; i < k;i++)
        b[a[i]]++;
    for(i = 0;i < 20; i++)
        if (b[i]>0 && snt(i))
            printf("%d %d\n",i,b[i]);
}
