#include<stdio.h>
int n;
void vehinh(int x,int d,int c){
    int i;
    if(x>n) return;
    if(x%2==0)for(i=c;i>=d;i--) printf("%c ",'a'+i-1);
    else      for(i=d;i<=c;i++) printf("%c ",'a'+i-1);
    printf("\n");
    vehinh(x+1,c+1,c+x+1);
}
main(){
    scanf("%d",&n);
    vehinh(1,1,1);
}
