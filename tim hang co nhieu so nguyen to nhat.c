#include<stdio.h>
#include<math.h>
int ngto (int n)
{
    int i;
    if (n<2) return 0;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int main()
{
    int n,i,j,a[50][50],hang=0,snt=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++) scanf("%d",&a[i][j]);
    for (i=0;i<n;i++){
        int d=0;
        for (j=0;j<n;j++){
             if (ngto(a[i][j])) d++;
        }
        if (d>snt) {
            hang = i;
            snt = d;
        }
    }
    printf("%d\n",hang+1);
    for (j=0;j<n;j++)
        if (ngto(a[hang][j])) printf("%d ",a[hang][j]);
}
