#include<stdio.h>
#include<math.h>
int ngto(int n)
{
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int cso_ngto (int n)
{
    while(n>0){
        if (ngto(n%10)==0) return 0;
        n=n/10;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,d=0;
        scanf("%d%d",&a,&b);
        for (int i=a;i<=b;i++)
            if (cso_ngto(i))
                if (ngto(i)) d++;
        printf("%d\n",d);
    }
}
