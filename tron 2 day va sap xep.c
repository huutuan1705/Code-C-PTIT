#include<stdio.h>
void nhap(int a[], int n){
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int main()
{
    int t,u;
    scanf("%d",&t);
    for (u=1;u<=t;u++){
        int n,a[30000],b[30000],c[60000],i,j,d,k;
    scanf("%d",&n);
    nhap(a,n);
    nhap(b,n);
    for (i=0;i<n;i++)
        for(j=0;j<n;j++){
            if (a[i]<a[j]){
                d = a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    for (i=0;i<n;i++)
        for(j=0;j<n;j++){
            if (b[i]>b[j]){
                d = b[i];
                b[i]=b[j];
                b[j]=d;
            }
        }
    i = 0;j = 0;
    for (k=0;k<2*n;k++){
        if (k%2==0){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
    }
    printf("Test %d:\n",u);
    for (k=0;k<2*n;k++) printf("%d ",c[k]);
    printf("\n");
    }

}
