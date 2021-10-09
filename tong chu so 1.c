#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    int a = 0,b;
    while(n>0)
    {
        b = n%10;
        a += b;
        n = n/10;
    }
    printf("%d",a);
}
