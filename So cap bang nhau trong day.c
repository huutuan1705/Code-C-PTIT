#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a[30];
        int n,i,j,d=0;
        scanf("%d",&n);
        for (i=0;i<n;i++)
            scanf("%d",&a[i]);
        for (i=1;i<n;i++)
            if(a[i]==a[i-1]) d++;
        printf("%d\n",d);
    }
}
