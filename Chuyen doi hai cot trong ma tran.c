#include<stdio.h>
int main()
{
    int m,n,a,b,i,j,d,s[50][50];
    scanf("%d%d",&m,&n);
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            scanf("%d",&s[i][j]);
    scanf("%d%d",&a,&b);

        for (i=0;i<m;i++){
            d = s[i][a-1];
            s[i][a-1]=s[i][b-1];
            s[i][b-1]=d;
        }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}

