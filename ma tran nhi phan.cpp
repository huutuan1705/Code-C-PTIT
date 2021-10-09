#include<stdio.h>
int main()
{
    int n, a[1000][10], d = 0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        for (int j=0;j<3;j++) scanf("%d",&a[i][j]);
    for (int i=0;i<n;i++){
        int d1 = 0, d2 = 0;
        for (int j=0;j<3;j++){
            if (a[i][j]==1) d1++;
            else d2++;
        }
        if (d1>d2) d++;
    }
    printf("%d",d);
}
