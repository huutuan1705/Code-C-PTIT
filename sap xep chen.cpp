
#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void in(int a[],int n){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}
void sapxep(int a[],int n){
    int i,j,t;
    for(i=0;i<n;i++){
        t=a[i]; j=i-1;
        while(a[j]>t&&j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
        printf("Buoc %d: ",i); in(a,i+1);
    }
}
main(){
    int a[100],n;
    scanf("%d",&n);
    nhap(a,n);
    sapxep(a,n);
}
