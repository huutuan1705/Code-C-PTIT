#include<stdio.h>
int ngto(int n)
{
    int i;
	if (n<2) return 0;
	else for (i=2;i*i<=n;i++)
		{
			if (n%i==0) return 0;
		}
	return 1;
}
int fibo(int n)
	{
		if (n<4) return n;
		return fibo (n-2)+fibo(n-1);
	}
int ktfibo(int n)
	{
	    int i;
		for (i=1;i<=n;i++) if (n==fibo(i)) return 1;
		return 0;
	}
int sum(int n)
	{
		int sum=0;
		while (n>0)
		{
			int k=n%10;
			sum+=k;
			n/=10;
		}
		return sum;
	}
int main ()
{
	int a,b;
	scanf ("%d%d",&a,&b);
	if (a>b)
	{
		int c=a;
		a=b;
		b=c;
	}
	int i;
	for (i=a;i<=b;i++)
	{
		if (ngto(i)==0) continue;
		if (ktfibo(sum(i)))
		printf ("%d ",i);
	}
}
