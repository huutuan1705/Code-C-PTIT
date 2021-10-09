#include<stdio.h>
#include<math.h>
int skg(int n)
{
    int d;
    while (n>=10)
        {
            d = n%10;
            n = n/10;
            if (d<n%10)
                return 0;
        }
    return 1;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a = pow(10,n-1), b = pow(10,n);
        for (int i = a;i<b;i++)
            if (skg(i)) printf("%d ",i);
        printf("\n");
    }
}

