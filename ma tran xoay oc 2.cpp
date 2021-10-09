#include<stdio.h>
main ()
{
    int t;
	scanf("%d", &t);
	while (t--)
	{
		int m, n,i,j,dem = 1,a[100][100];
		scanf("%d%d", &n, &m);
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }
		int dong = n, cot = m, k = 1, p = 0;
		while(k <= n*m)
		{
			for(i = p; i < cot; i++)
				{
					k++;
					printf("%d ",a[p][i]);
				}
			if (k == (n*m +1))
			{
				 break;
			}
			for(i = p+1; i < dong; i++)
				{
					k++;
					printf("%d ",a[i][cot-1]);
				}
			if (k == (n*m +1))
			{
				break;
			}
			for(i = cot-2; i >=p; i--)
				{
					k++;
					printf("%d ",a[dong-1][i]);
				}
			if (k == (n*m +1))
			{

				 break;
			}
			for(i = dong-2; i > p; i--)
				{
					k++;
					printf("%d ",a[i][p]);
				}
			if (k == (n*m +1))
			{

				 break;
			}
			p++; dong --; cot --;
		}
		printf("\n");
	}
}
