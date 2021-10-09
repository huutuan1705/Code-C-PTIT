#include<stdio.h>
#include<math.h>

int stn(int n)
{
    int d=0,m=n;
    while (m>0)
    {
        d = d*10 + m%10;
        m /=10;
    }
    if (d==n) return 1;
    else return 0;
}

int ktra9 (int n)
{
    int d=0;
    while (n>0)
    {
        d = n%10;
        n=n/10;
        if (d==9) return 0;
    }
    return 1;
}

int main()
{
    int n,i,d=0;
    scanf("%d",&n);
    for (i=2;i<n;i++)
        if (stn(i)==1 && ktra9(i)==1)
    {
        printf("%d ",i);
        d++;
    }
    printf("\n%d",d);
}
