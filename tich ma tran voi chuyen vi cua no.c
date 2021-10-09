#include <stdio.h>
int a[100][100],b[100][100],c[100][100];
int main()
{
    int t,u;
    scanf("%d",&t);
    for (u=1;u<=t;u++){
        int m,n,i,j,k;
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
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
        }
    }
    for (i=0;i<m;i++){
        for (k=0;k<n;k++){
            for (j=0;j<m;j++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
    printf("Test %d:\n",u);
    for (i=0;i<m;i++){
        for (j=0;j<m;j++) printf("%d ",c[i][j]);
        printf("\n");
    }
    }
    return 0;
}

