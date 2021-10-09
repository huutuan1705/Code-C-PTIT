#include<stdio.h>
int main()
{
    int t,u;
    scanf("%d",&t);
    for (u=1;u<=t;u++){
        int n,i,j,k,a[21][21],b[21][21],c[21][21];
        scanf("%d",&n);
        for (i=0;i<n;i++)
            for (j=0;j<n;j++)
            if (i>=j) a[i][j]=j+1;
            else a[i][j] = 0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                b[i][j]=a[j][i];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++) c[i][j]=0;
        for (i=0;i<n;i++)
            for (k=0;k<n;k++)
                for (j=0;j<n;j++)
                    c[i][j]+=a[i][k]*b[k][j];
        printf("Test %d:\n",u);
        for (i=0;i<n;i++){
            for (j=0;j<n;j++)
                printf("%d ",c[i][j]);
            printf("\n");
        }
    }
}
