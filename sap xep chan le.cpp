#include<stdio.h>
void sapxep (int a[], int n, int x)
{
    int i,j,t;
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (x==0){
                if (a[i]>a[j]){
                    t = a[i]; a[i] = a[j]; a[j] = t;
                }
            }else {
                if (a[i]<a[j]){
                    t = a[i]; a[i] = a[j]; a[j] = t;
                }
            }
        }
    }
}

int main()
{
    int i,n,a[1005],chan[1000], le[1000],dc=0, dl=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2==0) chan[dc++] = a[i];
        else le[dl++] = a[i];
    }
    sapxep(chan,dc,0);
    sapxep(le,dl,1);
    int j=0, k=0;
    for (int i=0;i<n;i++)
        if (a[i]%2==0) printf("%d ",chan[j++]);
        else printf("%d ",le[k++]);
}
