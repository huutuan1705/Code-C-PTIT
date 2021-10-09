#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b = a/365;
	c = (a-b*365)/7;
	d = a-c*7-b*365;
	printf("%d %d %d",b,c,d);
}
