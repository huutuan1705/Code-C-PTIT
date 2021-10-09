#include<stdio.h>
int main()
{
    long n;
    int a[100];
    int i=0;
    scanf("%ld",&n);
    while(n > 0 ) {
        a[i] = n % 10;
        n = n / 10;
        i++;
    }
    if( a[0] != 0)
    printf("%ld",a[0]);
    int j;
    for(j = i-2; j >= 1; j--)
        printf("%ld",a[j]);
    printf("%ld",a[i-1]);
}
