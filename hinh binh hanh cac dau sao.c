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
        for (k=0;k<n;k++)
            printf("*");
		printf ("\n");
	}
}
