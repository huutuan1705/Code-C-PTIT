#include<stdio.h>
int giaithua(int n) {
    int t=1,i;
    for(i = 1; i <= n; i++) t = t*i;
    return t;
}

int tong(int n) {
    int tong=0, m=n;
    while(n>0) {
        int t=n%10;
        tong = tong + giaithua(t);
        n = n/10;
    }
    if(tong==m) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if (tong(n)==1) printf("1");
    else printf("0");
}
