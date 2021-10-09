#include<stdio.h>
#include<math.h>
int snt(int n)
{
    if (n<2)
        return 0;
    int i;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int d=0;
    int i=2;
    while(d < n)
    {
        if (snt(i)==1)
        {
            printf("%d\n",i);
            d++;
        }
        i++;
    }
    return 0;
}
