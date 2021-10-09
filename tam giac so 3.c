#include<stdio.h>
int main()
{
    int h,i,j;
    scanf("%d",&h);
    for (i=1;i<=h;i++)
    {
        for (j=1;j<=2*i;j++)
            if (j%2!=0) printf("%d",j);
        if (i>1)
            for (j=2*i-3;j>=1;j--)
                if (j%2!=0) printf("%d",j);
        printf("\n");
    }
}
