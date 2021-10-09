#include<stdio.h>
int main()
{
    int a,b,i,j;
	scanf ("%d %d",&a,&b);
	if(a<=b)
    {
        for (i=1;i<=a;i++)
        {
            for (j=i;j>1;j--) printf("%d",j);
            for (j=1;j<=b-i+1;j++) printf("%d",j);
            printf("\n");
        }
    }
    else
    {
        for (i=1;i<=a;i++)
        {
            if (i<=b)
            {
                for (j=i;j>1;j--) printf("%d",j);
                for (j=1;j<=b-i+1;j++) printf("%d",j);
                printf("\n");
            }
            else
            {
                printf("%d",i);
                for (j=i-1;j>=i-b+1;j--) printf("%d",j);
                printf("\n");
            }
        }
    }
}
