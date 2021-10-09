#include<stdio.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void in(int a[],int n){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}
void sapxep(int a[],int n){
    int i,j,t,kt;
    for(i=0;i<n-1;i++){
        kt=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j]; a[j]=a[j+1]; a[j+1]=t;
                kt=1;
            }
        }
        if(kt==0) break;
        printf("Buoc %d: ",i+1); in(a,n);
    }
}
main(){
    int a[100],n;
    scanf("%d",&n);
    nhap(a,n);
    sapxep(a,n);
}

