#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            if (i>=j) printf("*");
            else printf(" ");
        printf("\n\n");
    }
}
