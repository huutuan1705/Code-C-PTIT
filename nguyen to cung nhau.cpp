#include<stdio.h>
#include<math.h>
long long UCLN (int a, int b)
{
    if (a==0||b==0) return a+b;
    return UCLN(b%a,a);
}

int main()
{
    int b[100], n,M;
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&b[i]);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (b[j]>b[i]){
                M = b[i];
                b[i] = b[j];
                b[j] = M;
            }
    for (int i = 0;i<n;i++){
        for (int j=i+1;j<n;j++)
        {
            if (UCLN(b[i],b[j])==1)
                printf("%d %d\n", b[i],b[j]);
        }
    }
}
