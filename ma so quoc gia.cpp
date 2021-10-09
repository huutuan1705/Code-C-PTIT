#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        int a[20], m=0;
        while(n>0){
            a[m] = n%10;
            m++;
            n=n/10;
        }
        for (int i=m-1;i>=0;i--){
            if (a[i]==0 && a[i-1]==8 && a[i-2]==4){
                for (int j=i-3;j>=0;j--) printf("%d",a[j]);
                break;
            }
            else printf("%d",a[i]);
        }
        printf("\n");
    }
}
