#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        long n;
        scanf("%ld",&n);
        int d1=0,d2=0;
        while(n>0)
        {
            int b = n%10;
            if (b%2==0) d1++;
            else d2++;
            n =n/10;
        }
        printf("%d %d\n",d2,d1);
    }
}
