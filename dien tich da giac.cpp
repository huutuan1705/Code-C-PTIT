#include<stdio.h>
struct diem{
    int x,y;
};

struct diem ds[1000];

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n, s=0; scanf("%d",&n);
        for (int i=0;i<n;i++) scanf("%d%d",&ds[i].x,&ds[i].y);
        for (int i=0;i<n-1;i++){
            s += ds[i].x*ds[i+1].y - ds[i+1].x*ds[i].y;
        }
        s += ds[n-1].x*ds[0].y - ds[n-1].y*ds[0].x;
        if (s<0) s = -s;
        double d = (double)s/2;
        printf("%.3lf\n",d);
    }
}
