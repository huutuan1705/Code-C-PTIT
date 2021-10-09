#include<stdio.h>
int xuly (long long n)
{
    int a,m=0,d=0,b[20];
    while(n>0){
        a = n%10;
        if (a==0 || a==8 || a==9) b[m] = 0;
        else if (a==1) b[m]=1;
        else return 0;
        m++;
        n=n/10;
    }
    for (int i=0;i<m;i++)
        if (b[i]!=0) d++;
    if (d==0) return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        if (xuly(n)==0) printf("INVALID\n");
        else{
            int a,m=0,d=0,b[20];
            while(n>0){
                a = n%10;
                if (a==0 || a==8 || a==9) b[m] = 0;
                if (a==1) b[m]=1;
                m++;
                n=n/10;
            }
            for (int i=m-1;i>=0;i--){
                if (b[i]!=0){
                    printf("%d",b[i]);
                    for (int j=i-1;j>=0;j--) printf("%d",b[j]);
                    break;
                }
            }
            printf("\n");
        }
    }
}
