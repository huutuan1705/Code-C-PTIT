#include<stdio.h>
int stn(int n)
{
    int d=0,m=n;
    while (m>0)
    {
        d = d*10 + m%10;
        m /=10;
    }
    if (d==n) return 1;
    return 0;
}

int tong10(int n)
{
    int t=0;
    while(n>0)
    {
        t += n%10;
        n = n/10;
    }
    if (t%10==0) return 1;
    return 0;
}
int main()
{
    int t,n,a,b,i,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        d=0;
        a = pow(10,n-1);
        b= pow(10,n);
        for (i=a;i<b;i++)
            if (stn(i)&&tong10(i))
                d++;
        printf("%d\n",d);
    }
}
