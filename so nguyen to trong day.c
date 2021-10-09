#include<stdio.h>
#include<math.h>
int snt(int n)
{
    if(n<2)
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
    int i;
    for (i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        int a[100];
        int j;
        for (j=0;j<x;j++)
            scanf("%d",&a[j]);
        for (j=0;j<x;j++)
            if (snt(a[j])==1) printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
}
