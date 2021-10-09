#include<stdio.h>
#include<math.h>
long long max(long long n)
{
	long long max;
	while(n%2==0)
	{
		max=2;
		n/=2;
	}
	int i;
	for(i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
            n/=i;
		max=i;
	}
    if(n>1) max=n;
    return max;
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		long long a;
		scanf ("%lld",&a);
		printf ("%lld\n",max(a));
	}
	return 0;
}
