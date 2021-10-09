#include<stdio.h>
int main(){
    int n,k;
	int dem=0;
    scanf("%d %d",&n,&k);
   for(int i=2;i<=n;i++){
       int j=i;
       while(j%2==0){
           dem++;
           j/=2;
       }
   }
   if(dem>=k)printf("Yes");
   else printf("No");
}
