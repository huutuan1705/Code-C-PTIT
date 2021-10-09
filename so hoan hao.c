#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = 0;
    int i;
    for (i=1;i<=n/2;i++)
    {
        if(n%i==0) s += i;
    }
    if(s==n) printf("1");
    else printf("0");
}
