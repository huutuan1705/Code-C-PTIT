#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int m[4]={6,28,496,8128};
    if (a>=b)
    {
        int i;
        for (i=0;i<4;i++)
            if (m[i]<=a && m[i]>=b) printf("%d ",m[i]);
    }
    else
    {
        int i;
        for (i=0;i<4;i++)
            if (m[i]>=a && m[i]<=b) printf("%d ",m[i]);
    }

}
