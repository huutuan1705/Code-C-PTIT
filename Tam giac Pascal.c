#include <stdio.h>

long combin(int n, int k)
{
    if (k==0 || k==n) return 1;
    return combin(n-1,k-1)+combin(n-1,k);
}

int main()
{
    int n,k,j;
    scanf("%d",&n);
    for (k=0; k < n; k++)
    {
        for (j=0; j <= k; j++)
            printf("%d ",combin(k,j));
        printf("\n");
    }
}
