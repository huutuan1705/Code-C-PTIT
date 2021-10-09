#include <stdio.h>
#include <math.h>
struct TamGiac
{
  double x;
  double y;
};
typedef struct TamGiac TG;
void Solve()
{
  TG a,b,c;
  scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
  double AB=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
  double AC=sqrt((c.x-a.x)*(c.x-a.x)+(c.y-a.y)*(c.y-a.y));
  double BC=sqrt((b.x-c.x)*(b.x-c.x)+(b.y-c.y)*(b.y-c.y));
  if (AB+AC>BC && AB+BC>AC && AC+BC>AB)
  {
    double p=AB+AC+BC;
    printf("%0.3f\n",p);
  }
  else printf("INVALID\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    Solve();
  }
  return 0;
}
