#include <stdio.h>

int main() {
    int h,i,j;
    scanf("%d",&h);
    for(i=1;i<=h;i++){
        printf("%d ",i);
        int k=h-1,l=i;
        for(j=1;j<i;j++){
            l=l+k;
            k--;
            printf("%d ",l);
        }
        printf("\n");
    }
}
