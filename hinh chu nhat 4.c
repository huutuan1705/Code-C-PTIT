#include<stdio.h>
int main()
{
    int a,b,i,j;
	scanf ("%d %d",&a,&b);
	if(a<=b)
    {
        for (i=b;i>=a;i--)
        {
            for (j=i;j>1;j--) printf("%d",j);
            for (j=1;j<=b-i+1;j++) printf("%d",j);
            printf("\n");
        }
    }
}
