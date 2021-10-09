#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    int d1 = 0, d2 = 0;
    while (n != 0)
    {
        int k = n%10;
        n = n/10;
        if(k%2==0)
            d1++;
        else
            d2++;
    }
    printf("%d %d",d2,d1);
}
