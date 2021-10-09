#include<stdio.h>
int main()
{
    int h,i,j,k,a;
    scanf("%d",&h);
    for (i=1;i<=h;i++){
        printf("%c ",'A'+i-1);
        k=h-1;a=i;
        for (j=1;j<i;j++){
            a += k;
            k--;
            printf("%c ",'A'+a-1);
        }
        printf("\n");
    }
}
