#include<stdio.h>
long long a[100000];
int lap(long long a[], int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (a[i]==a[j]){
                printf("%d\n",a[i]);
                return;
        }
    printf("NO\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j;
        scanf("%d",&n);
        for (i=0;i<n;i++)
            scanf("%d",&a[i]);
        lap(a,n);
    }
}
