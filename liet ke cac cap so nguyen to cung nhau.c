#include<stdio.h>
int ktra(int a, int b)
{
    while(a!=b)
    {
        if (a>b)
            a -= b;
        else b -= a;
    }
    return a;
}
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        for (j=a;j<=b;j++)
            if (ktra(i,j)==1 && (i<j)) printf("(%d,%d)\n",i,j);
    }
}
