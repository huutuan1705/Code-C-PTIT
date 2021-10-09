#include<stdio.h>
#include<string.h>
struct cua_hang{
    int ma;
    char ten[500], nhom[500];
    double mua, ban;
};
struct cua_hang ds[1000];
int n;
void nhap()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("\n");
        gets(ds[i].ten);
        scanf("\n");
        gets(ds[i].nhom);
        scanf("\n");
        scanf("%lf%lf",&ds[i].mua,&ds[i].ban);
        ds[i].ma = i+1;
    }
}
void sapxep()
{
    for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].ban - ds[i].mua < ds[j].ban - ds[j].mua)
			{
				struct cua_hang u=ds[i];
				ds[i]=ds[j];
				ds[j]=u;
			}
		}
	}
}
void in()
{
    for (int i=0;i<n;i++)
        printf("%d %s %s %.2lf\n",ds[i].ma, ds[i].ten, ds[i].nhom,ds[i].ban - ds[i].mua);
}
int main()
{
    nhap();
    sapxep();
    in();
}



