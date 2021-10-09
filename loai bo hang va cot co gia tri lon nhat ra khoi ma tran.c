#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int h=1;h<=t;h++){
		int n,m;
		int t=0,c=0;
		int b,k;
		int a[15][15];
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
			for(int i=0;i<n;i++)
	{
	    	t=0;
		for(int j=0;j<m;j++)
			t+=a[i][j];
		if(t>c)
		{
			b=i;
			c=t;
		}
	}
	for(int i=b;i<n;i++)
		for(int j=0;j<m;j++)
		{
			a[i][j]=a[i+1][j];
		}
	n--;
	c=0;
	for(int j=0;j<m;j++){
	    	t=0;
		for(int i=0;i<n;i++){
			t+=a[i][j];
			if(t>c){
				k=j;
				c=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=k;j<m;j++){
				a[i][j]=a[i][j+1];
		}
	}
	m--;
	printf("Test %d:\n",h);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	}
}
