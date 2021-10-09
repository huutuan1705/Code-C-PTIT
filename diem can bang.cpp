#include<stdio.h>
int a[100001];
int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n, s = 0, s1 = 0,d=0;
        scanf("%d",&n);
        for (int i=0;i<n;i++){
            scanf("%d",&a[i]);
            s+=a[i];
        }
        for (int i=1;i<n;i++){
            s1+=a[i-1];
            if (s1 == (s-a[i]-s1)){
                 printf("%d\n",i+1);
                 d=1;
                 break;
            }
        }
        if (d==0) printf("-1\n");
    }
}
