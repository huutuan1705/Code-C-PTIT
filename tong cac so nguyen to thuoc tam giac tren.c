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

int main()
{
    int n,a[50][50],i,j,sum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for (i=0;i<n;i++)
        for (j=i;j<n;j++)
            if (snt(a[i][j])==1)
            sum += a[i][j];
    printf("%d",sum);
}
