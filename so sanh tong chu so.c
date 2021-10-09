#include<stdio.h>
int tongchuso (int n)
{
    int t=0;
    while (n>0)
    {
        t += n%10;
        n = n/10;
    }
    return t;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int d1, d2;
    d1 = tongchuso(a);
    d2 = tongchuso(b);
    if (d2<d1) printf("%d %d",b,a);
    else printf("%d %d",a,b);
    return 0;
}
