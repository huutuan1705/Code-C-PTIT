#include <stdio.h>
int min(int x,int b){
	if(x>b) return b;
	return x;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[100][100];
	for (int i=1;i<=n;i++){
		for (int j=n;j>=1;j--){
			printf("%d ",n-min(i,j)+1);
			
		}
		printf("\n");
	}
}
