#include <stdio.h>
int main()
{
    int m,n,i,j;
    int a[10][10],b[10][10];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        b[i][j]=a[j][i];
        printf("%d ",b[i][j]);
        }
        printf("\n");
    }
return 0;
}
