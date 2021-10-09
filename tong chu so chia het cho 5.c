#include<stdio.h>
#include<math.h>
int snt(int n)
{
    if (n<2) return 0;
    int i;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return 0;
    return 1;
}
int tongchuso (int n)
{
    int d=0;
    while (n>0)
    {
        d += n%10;
        n = n/10;
    }
    if (d%5 == 0) return 1;
    else return 0;
}

int main()
{
    int n,i,d=0;
    scanf("%d",&n);
    for (i=5;i<n;i++)
        if (snt(i)==1 && tongchuso(i)==1)
            {
                printf("%d ",i);
                d++;
            }
    printf("\n%d",d);
}
