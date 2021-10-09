#include<stdio.h>
#include<math.h>
void ptbac1(float a, float b)
{
    float x = -b/(a);
    printf ("%.2f",x);
}

void ptbac2(float a, float b, float c)
{
    float delta = b*b-4*a*c,x1,x2;
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    if (a==0) ptbac1(b,c);
    else
    {
        if (delta<0) printf("NO");
        else if(delta == 0) printf ("%.2f",-b/(2*a));
        else printf("%.2f %.2f",x1,x2);
    }
}
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    ptbac2(a,b,c);
    return 0;

}
