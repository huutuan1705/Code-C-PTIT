#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j,d=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        b[i]=1;
    for (i=0;i<n;i++)
    {
        int count = 1;
        if (b[i])
        {
            b[i]=0;
            for (j=i+1;j<n;j++)
            {
                if (a[i]==a[j])
                {
                    count ++;
                    b[j]=0;
                }
            }
            printf("%d %d\n",a[i],count);
        }
    }
    return 0;
}
