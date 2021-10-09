#include<stdio.h>
#include<string.h>

struct thong_tin{
    char ten[100], date[100];
    int ma;
    double diem1, diem2, diem3;
};

struct thong_tin ds[500];
int main()
{
    int n;
    double a[100],Max;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("\n");
        gets(ds[i].ten);
        scanf("%s",&ds[i].date);
        scanf("%lf%lf%lf",&ds[i].diem1,&ds[i].diem2,&ds[i].diem3);
        ds[i].ma = i+1;
        a[i] = ds[i].diem1 + ds[i].diem2 + ds[i].diem3;
    }
    Max = a[0];
    for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				struct thong_tin u=ds[i];
				ds[i]=ds[j];
				ds[j]=u;
				double x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
    for (int i=0;i<n;i++)
        printf("%d %s %s %.1lf\n",ds[i].ma,ds[i].ten,ds[i].date,a[i]);
}

