#include<stdio.h>
void nhap(int a[100][100], int n,int m)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++) scanf("%d",&a[i][j]);
}

int main()
{
    int m,n,p,q,a[100][100], b[100][100], c[100][100],d1[100][100]={0}, d2[100][100]={0};
    scanf("%d%d%d%d",&m,&n,&p,&q);
    nhap(a,m,n); nhap(b,n,p); nhap(c,p,q);
    for (int i=0;i<m;i++)
        for (int k=0;k<n;k++)
            for (int j=0;j<p;j++)
             d1[i][j]+=a[i][k]*b[k][j];
    for (int i=0;i<m;i++)
        for (int k=0;k<p;k++)
            for (int j=0;j<q;j++)
             d2[i][j]+=d1[i][k]*c[k][j];
    for (int i=0;i<m;i++){
        for (int j=0;j<q;j++) printf("%d ",d2[i][j]);
        printf("\n");
    }
}
