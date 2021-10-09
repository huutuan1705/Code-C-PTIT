#include <stdio.h>

int main()
{
	int n, arr[100][100] = {};
	scanf("%d", &n);
	int temp = n, vong = 0;
	for	(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == vong|| j == vong || i == n - vong - 1 || j == n - vong - 1)
			{
				arr[i][j] = temp;
			}
		}
		temp--, vong++;
	}
	for	(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
