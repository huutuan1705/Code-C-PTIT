#include<stdio.h>
#include<math.h>
int Fibo(int n)
{
    int fib1 = 1, fib2 = 1, fib;
    while (fib1+fib2 <= n)
    {
        fib = fib1 + fib2;
        fib2 = fib1;
        fib1 = fib;
    }
    if(fib == n) return 1;
    else return 0;
}
int main()
{
    long n;
    scanf("%ld",&n);
    if (Fibo(n)== 1) printf("1");
    else printf("0");
    return 0;
}
