#include <stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d",&t);
	for (int k=1;k<=t;k++){
	int a[100][100],i,j,b=0,c=0,m,n,b1,b2;
	scanf("%d",&n);
	b1=n-1;
	b2=n-1;
	m=n*n;
	while(b<=n/2){
		for(i=b;i<=b2;i++){ //hangdau
			a[b][i]=m;
			m--;
		}
		for(i=b+1;i<=b1;i++){//doc
			a[i][b2]=m;
			m--;
		}
		for(i=b2-1;i>=b;i--){//ngang
			a[b1][i]=m;
			m--;
		}
		for(i=b1-1;i>b;i--){//doclen
			a[i][b]=m;
			m--;
		}
		b++;
		b1--;
		b2--;
	}
	printf("Test %d:\n",k);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}
}
