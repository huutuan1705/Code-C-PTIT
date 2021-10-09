#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	float d = a / (float)b;
	printf("%d\n\n%d\n\n%d\n\n%d\n\n%d\n\n%.2f",a+b,a-b,a*b,a/b,a%b,d);
	return 0;
}
