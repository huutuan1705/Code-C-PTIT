#include <stdio.h>
#include <math.h>
struct Point {
    double x,y;
};
double distance (struct Point p, struct Point q)
{
    double dx = p.x-q.y, dy=p.y-q.y;
    return sqrt(dx*dx + dy*dy);
}

int check (double d1, double d2, double d3)
{
    if (d1+d2<=d3 || d1+d3<=d2 || d2+d3<=d1) return 0;
    return 1;
}

int main()
{
    int t; struct Point a,b,c;
    scanf("%d", &t);
    while (t--){
        scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
        double d1=distance(A,B), d2 = distance(A,C), d3 = distance(B,C);
        if (!check(d1,d2,d3)) printf("INVALID\n");
        else{
            double area = (d1+d2+d3)*(d1+d2-d3)*(d1-d2+d3)*(-d1+d2+d3);
            printf("%.2lf\n",0.25*sqrt(area));
        }
    }
    return 0;
}
