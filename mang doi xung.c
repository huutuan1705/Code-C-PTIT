#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        int n,j,d=0;
        long long a[100];
        scanf("%d",&n);
        for (j=0;j<n;j++)
            scanf("%lld",&a[j]);
        for (j=0;j<n;j++)
            if (a[j] != a[n-j-1])
                d++;
        if (d==0) printf("YES\n");
        else printf("NO\n");
    }
}
