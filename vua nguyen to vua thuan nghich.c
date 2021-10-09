#include<stdio.h>
int snt(int n)
{
    if (n<2) return 0;
    int i;
    for (i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}

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

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int d=0,j;
        for (j=a;j<=b;j++)
        {
            if (snt(j)==1 && stn(j)==1)
            {
                printf("%d ",j);
                d++;
            }
            if ((d)%10==0 && snt(j)==1 && stn(j)==1) printf("\n");
        }
        printf("\n");
    }
    return 0;
}
