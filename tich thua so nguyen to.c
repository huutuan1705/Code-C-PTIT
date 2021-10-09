#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
    scanf("%d", &n);
    int dem,d=1;
    for(i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem) d = d*i;
        }
    printf("%d\n",d);
    }
}

