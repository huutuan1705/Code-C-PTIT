#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		long a;
		scanf("%ld",&a);
		double t = 1/(double)a;
		printf("%.15f\n",t);
	}
}
