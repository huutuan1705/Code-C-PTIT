#include<stdio.h>
int sodep(int n) {
    int m = n;
    int dao = 0;
    int dem = 0;
    int tong = 0;
    while(n > 0) {
        int t = n % 10;
        if(t == 6)
        dem++;
        dao = dao * 10 + t;
        tong = tong + t;
        n = n / 10;
    }
    if(dao == m && dem >= 1 && tong%10==8 )
        return 1;
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if (b>=a)
    {
        for (i=a;i<=b;i++)
            if (sodep(i)==1) printf("%d ",i);
    }
    else
    {
        for (i=b;i<=a;i++)
            if (sodep(i)==1) printf("%d ",i);
    }
    return 0;
}
