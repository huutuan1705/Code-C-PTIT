#include<stdio.h>
int xuly(long long n)
{
    int a[20],m=0;
    while(n>0){
        a[m] = n%10;
        m++;
        n=n/10;
    }
    int x1 = a[0], x2 = a[m-1];
    if ((x1!=2*x2) && (x1*2!=x2)) return 0;
	for (int i=1; i<m/2;i++)
        if (a[i]!=a[m-i-1] ) return 0;
	return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        if (xuly(n)) printf("YES\n");
        else printf("NO\n");
    }
}
