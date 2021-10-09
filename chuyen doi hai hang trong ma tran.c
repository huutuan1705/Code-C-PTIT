#include<stdio.h>
int main()
{
    int m,n,a,b,i,j,d,s[50][50];
    scanf("%d%d",&m,&n);
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            scanf("%d",&s[i][j]);
    scanf("%d%d",&a,&b);

        for (j=0;j<n;j++){
            d = s[a-1][j];
            s[a-1][j]=s[b-1][j];
            s[b-1][j]=d;
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
