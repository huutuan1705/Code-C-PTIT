#include<stdio.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i=0;i<n;i++) scanf ("%d",&a[i]);
		int max=a[0],k;
		for (int i=0;i<n;i++) if (max <a[i]) max=a[i];
		int b[max],maxb=0;
		for (int i=1;i<=max;i++) b[i]=0;
		for (int i=0;i<n;i++) b[a[i]]++;
		for (int i=0;i<n;i++)
		{
			if (b[a[i]]*2<=n) continue;
			maxb=b[a[i]];
			k=a[i];
		}
		if (maxb!=0) printf ("%d\n",k);
		else printf ("NO\n");
	}
}
