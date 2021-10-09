#include<stdio.h>
#include<math.h>
int snt(int n){
    int i;
    if (n<2) return 0;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}

int ktra(int x)
{
    int tong = 0;
    int cs = 1;
    while(x > 0){
        int t = x % 10;
        if(t != 2 && t != 3 && t != 5 && t != 7) return 0;
        tong = tong + t;
        x = x / 10;
    }
    if(snt(tong)) return 1;
    return 0;
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,d=0,i;
        scanf("%d%d",&a,&b);
        if (a<=b){
            for (i=a;i<=b;i++)
                if (ktra(i))
                    if (snt(i)) d++;
            printf("%d\n",d);
        }
        else{
            for (i=b;i<=a;i++)
                if (ktra(i))
                    if (snt(i)) d++;
            printf("%d\n",d);
        }
    }
}
