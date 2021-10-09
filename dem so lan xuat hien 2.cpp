#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    for (int k=1;k<=t;k++){
        int n, a[1000],b[1000] = {0},d=0;
        scanf("%d",&n);
        for (int i=0;i<n;i++) scanf("%d",&a[i]);
        for (int i=0;i<n;i++){
            if (b[i]==0){
                b[i]=1;
                for (int j=i+1;j<n;j++)
                if (a[i]==a[j]){
                    b[i]++;
                    b[j]=-1;
                }
            }
        }
        printf("Test %d:\n",k);
        for (int i=0;i<n;i++) if (b[i]!=-1) printf("%d xuat hien %d lan\n",a[i],b[i]);
    }
}

