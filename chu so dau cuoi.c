#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    int t = n%10;
    int a=0,b;
    while (n>0)
    {
        int b = n%10;
        a=b;
        n=n/10;
    }
    printf("%d %d",a,t);
}
