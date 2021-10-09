#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		long n;
		scanf("%ld",&n);
		long t = n*(1+n)/2;
		printf("%ld\n",t);
	}
	return 0;
}
