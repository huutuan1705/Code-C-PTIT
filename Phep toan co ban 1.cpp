#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	float d = a / (float)b;
	if (b==0) printf("0");
	else{
	printf("%d %d %d %.2f %d ",a+b,a-b,a*b,d,a%b);
	}
	return 0;
}
