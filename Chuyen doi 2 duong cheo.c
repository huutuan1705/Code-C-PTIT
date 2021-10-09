#include<stdio.h>
int main()
{
    int m,i,j,d,s[50][50];
    scanf("%d",&m);
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
            scanf("%d",&s[i][j]);
    for (i=0;i<m;i++)
       {
            d = s[i][i];
            s[i][i] = s[i][m-i-1];
            s[i][m-i-1] = d;
        }
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}


