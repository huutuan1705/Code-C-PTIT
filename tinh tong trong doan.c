#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        int s = 0,i;
        for (i=a;i<=b;i++)
            s += i;
        printf("%d",s);
    }
    else
    {
        int s = 0,i;
        for (i=b;i<=a;i++)
            s += i;
        printf("%d",s);
    }
    return 0;
}
