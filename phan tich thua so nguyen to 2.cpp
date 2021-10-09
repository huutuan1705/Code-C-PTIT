#include<stdio.h>

int main()
{
    int n,a[1000],d=0;
    scanf("%d",&n);
    for (int i=2;i<=n;i++)
        while(n%i==0){
            a[d++] = i;
            n /= i;
        }
    for (int i = 0;i<d-1;i++) printf("%dx",a[i]);
    printf("%d",a[d-1]);
}

