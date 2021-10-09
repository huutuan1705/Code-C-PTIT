#include<stdio.h>
#include<math.h>
int xuly(int n)
{
    int chan = 0, le = 0;
    while(n>0){
        if ((n%10)%2==0) chan++;
        else le++;
        n=n/10;
    }
    if (chan==le) return 1;
    return 0;
}
int main()
{
    int n,d=0;
    scanf("%d",&n);
    if (n%2==0){
        for (int i=pow(10,n-1);i<pow(10,n);i++){
         if (xuly(i)){
            printf("%d ",i);
            d++;
         }
         if (d%10==0 && d!=0) printf("\n");
        }
    }
}
