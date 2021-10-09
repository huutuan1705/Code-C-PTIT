#include<stdio.h>
int main()
{
    int h,i,j;
    scanf("%d",&h);
    for (i=1;i<=h;i++)
    {
        for (j=1;j<=(2*i-1);j++)
            printf("%d",j);
        printf("\n");
    }
}
