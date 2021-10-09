#include<stdio.h>
#include<string.h>
struct pokemon{
    char p[100];
    int k, m, ma;
};

struct pokemon ds[500];

int main()
{
    int n,a[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf(" ");
        scanf("%s",&ds[i].p);
        scanf("%d%d",&ds[i].k,&ds[i].m);
        ds[i].ma = i+1;
    }
    int d1=0;
    for (int i=0;i<n;i++){
        int d2=0;
        while(ds[i].k<=ds[i].m){
            d1++; d2++;
            ds[i].m -= ds[i].k;
            ds[i].m += 2;
        }
        a[i] = d2;
    }
    int Max = a[0];
    for (int i=0;i<n;i++)
        if (a[i]>Max) Max = a[i];
    for (int i=0;i<n;i++)
        if (a[i]==Max){
            printf("%d\n%s",d1,ds[i].p);
            break;
        }
}
