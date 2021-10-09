#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p,s=0,j;
        scanf("%d%d",&n,&p);
        for (int i=1;i<=n;i++){
            j=i;
            while(j%p==0){
                ++s;
                j/=p;
            }
        }
        printf("%d\n",s);
    }
}
