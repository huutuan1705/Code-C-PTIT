#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,dem=0,to;
    scanf("%d",&n);
    int tien[10]={1000,500,200,100,50,20,10,5,2,1};
    for (i=0;i<10;i++){
        to = n/tien[i];
        if (to!=0) dem += to;
        n=n%tien[i];
    }
    printf("%d\n",dem);
    }
}
