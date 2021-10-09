#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    int d = 0;
    while(n>=10){
        n/=10;
        d++;
    }
    printf("%d ",d+1);
}
