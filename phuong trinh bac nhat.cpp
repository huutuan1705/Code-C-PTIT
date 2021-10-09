#include<stdio.h>
int main()
{
	float a,b;
	scanf("%f%f",&a,&b);
	float d = -b / a;
	if (a==0 && b != 0) printf("Vo nghiem");
	if (a==0 && b == 0) printf("Vo so nghiem");
	else printf("%.2f",d);
}
