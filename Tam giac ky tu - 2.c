#include<stdio.h>
int main()
{
    int n,i,j;
    char c;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        if (i>0) c = 'A'+2*i;
        else c = 'A';
        for (j=0;j<n;j++)
        {
            if (i+j<n)
            {
                printf("%c",c);
                c=c+2;
            }
        }
        printf("\n");
    }
    return 0;
}
