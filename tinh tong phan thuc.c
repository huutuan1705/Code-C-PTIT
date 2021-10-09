#include<stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    double a=0;
    double i;
    for (i=1;i<=n;i++)
        a += 1/i;
    printf("%.4lf",a);
    return 0;
}
