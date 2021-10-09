#include<stdio.h>
#include<math.h>

int snt (int n)
{
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}

int main()
{
    int a,b,n[20][20];
    scanf("%d%d",&a,&b);
    for (int i=0;i<a;i++)
        for (int j=0;j<b;j++) scanf("%d",&n[i][j]);
    for (int i=0;i<a;i++){
            for (int j=0;j<b;j++)
                if (snt(n[i][j])) printf("1 ");
                else printf("0 ");
            printf("\n");
    }
}
