#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,k;
    for(i=0;i<a-1;i++){
		for(j=0;j<a;j++){
			if(j==0||j==i) printf("*");
			else if (j>i) printf(" ");
			else printf(".");
		}
		printf("\n");
	}

	for(k=0;k<a;k++){
		printf("*");
	}
}

