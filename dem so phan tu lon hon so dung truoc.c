#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--){
        int a[50];
        int n,i,j,d=0;
        scanf("%d",&n);
        for (i=0;i<n;i++)
            scanf("%d",&a[i]);
        for (i=0;i<n;i++){
            int x=0;
            for (j=i;j>=0;j--)
                if(a[i]<a[j]) x++;
            if (x==0) d++;
        }
        printf("%d\n",d);
    }
}
