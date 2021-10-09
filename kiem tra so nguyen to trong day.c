#include<stdio.h>
#include<math.h>
int snt(int n)
{
    if (n<2)
        return 0;
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    int i,j;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    int dem = 0;
    for (j=0;j<n;j++)
    {
        if (snt(a[j])==1) printf("%d ",a[j]);
    }
}
