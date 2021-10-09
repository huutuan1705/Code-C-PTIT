#include<stdio.h>
int main ()
{
	int n,i,j;
	scanf ("%d",&n);
	int gt=1;
	for (i=1;i<=n;i++)
	{
		if (i%2!=0)
		{
			for (j=0;j<i;j++) printf ("%d ",gt++);
			printf ("\n");
		}
		if (i%2==0)
		{
			int k=gt+i-1;
			for (j=0;j<i;j++)
			{
				printf ("%d ",k--);
				gt++;
			}
			printf ("\n");
		}
	}
}
