#include<stdio.h>
#include<math.h>
void xuly(int n){
	int i=2,cnt=0;
	while(i<=sqrt(n)){
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt) printf("%d(%d) ",i,cnt);
		cnt=0;
		i++;
	}
	if(n!=1) printf("%d(1)",n);
	printf("\n");
}
int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n;
		scanf("%d",&n);
		printf("Test %d: ",k);
		xuly(n);
	}
}
