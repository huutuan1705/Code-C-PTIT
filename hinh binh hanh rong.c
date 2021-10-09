#include<stdio.h>
int main ()
{
	int n,i,j,k;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			printf ("~");
		}
        if (i==0||i==n-1) for (k=0;k<n;k++) printf ("*");
        else
			{
				printf ("*");
				for (k=1;k<n-1;k++) printf(".");
				printf ("*");
			}
		printf ("\n");
	}
}
