#include <stdio.h>
main(){
    int t,n,a[100005];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int kq=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            kq ^= a[i];
        }
        printf("%d\n",kq);
    }
}
