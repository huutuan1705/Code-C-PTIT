#include<stdio.h>
#include<math.h>
int stn(int n)
{
    int d=0,m=n;
    while (m>0)
        {
            if (m%10==4) return 0;
            d = d*10 + m%10;
            m /=10;
        }
    if (d==n) return 1;
    return 0;
}

int tcs(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n=n/10;
    }
    if (s%10==0) return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for (int i = pow(10,n-1);i<pow(10,n);i++)
            if (stn(i) && tcs(i)) printf("%d ",i);
        printf("\n");
    }
}
