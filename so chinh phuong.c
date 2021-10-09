#include<stdio.h>
#include<math.h>
int main()
{
	int b,j;
	scanf("%d ",&b);
	for (j=1;j<=b;j++)
	{
		int n,a;
        scanf("%d", &n);
        if(n>0)
        {
            a=sqrt(n);
            if((a*a)==n)
                printf("YES\n");
            else
                printf("NO\n");

        }
	}
	return 0;
}

