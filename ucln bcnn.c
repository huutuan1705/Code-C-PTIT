#include<stdio.h>
int main()
{
    long x,y,a,b;
    scanf("%ld%ld",&a,&b);
    x=a;y=b;
    while(a!=b)
    {
        if (a>b)
            a -= b;
        else b -= a;
    }
    printf("%ld\n%ld",a,(x*y)/a);
}
