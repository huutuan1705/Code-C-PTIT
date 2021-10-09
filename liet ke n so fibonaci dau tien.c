#include<stdio.h>
#include<math.h>
int fibonacci(int n) {
    int f0 = 0,f1 = 1,fn = 1,i;
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        printf("%d ",fibonacci(i));
    return 0;
}
