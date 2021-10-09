#include<stdio.h>
int main(){
    int a,b,i,j;
    char c,d;
    scanf("%d%d",&a,&b);
    if (a<=b){
        for (i=0;i<a;i++){
            c = 'A'+i-1;
            d = c;
            for (j=0;j<b;j++){
                if (d == 'A'+b-2) printf("%c",'A'+b-2);
                else{
                    printf("%c",c+j);
                    d++;
                }
            }
        printf("\n");
        }
    }
    else{
        for (i=0;i<a;i++){
            if (i<b){
                c = 'A'+i-1;
                d = c;
                for (j=0;j<b;j++){
                    if (d == 'A'+b-2) printf("%c",'A'+b-2);
                    else{
                        printf("%c",c+j);
                        d++;
                    }
                }
            }
            else{
                for (j=0;j<b;j++){
                    printf("%c",'A'+b-2);
                }
            }
            printf("\n");
        }
    }
}
