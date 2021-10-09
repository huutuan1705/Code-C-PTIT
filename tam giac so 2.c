#include<stdio.h>
int main()
{
    int h,i,j;
    scanf("%d",&h);
    for (i=1;i<=h;i++)
    {
        if (i%2==0)
        {
            for (j=1;j<=2*i;j++)
                if (j%2 == 0) printf("%d",j);
        }
        else
            {
                for (j=1;j<2*i;j++)
                if (j%2 != 0) printf("%d",j);
            }
        printf("\n");
    }
}
