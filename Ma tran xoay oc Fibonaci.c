#include <stdio.h>
int a[100][100],n,i,j,d,hang,cot;
long long fibo(int n){
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
    if (n == 0 || n == 1)
        return n;
    for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    return fn;
}
void matran()
{
    int m=0;
          while(m<=n*n) {
              int hang = n-1, cot = n-1,d=0;
              while(d<=n/2) {
                  for(i=d;i<=cot;i++) a[d][i]=fibo(m++);
                  for(i=d+1;i<=hang;i++) a[i][cot]=fibo(m++);
                  for(i=cot-1;i>=d;i--) a[hang][i]=fibo(m++);
                  for(i=hang-1;i>d;i--) a[i][d]=fibo(m++);
                  hang--;
                  cot--;
                  d++;
              }
              m++;
          }
}

void inkq()
{
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

int main()
{
    scanf("%d",&n);
    matran();
    inkq();
}
