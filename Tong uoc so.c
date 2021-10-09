#include<stdio.h>
long long tonguoc(int n){
	long long sum=0;
	while (n%2==0){
		sum+=2;
		n/=2;
	}
	int i;
	for (i=3;i*i<=n;i+=2){
		while (n%i==0){
			sum+=i;
			n/=i;
		}
	}
	if (n>1) return sum+n;
	return sum;
}

int main(){
	int n;
	long long cnt=0;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		if (a==1){
			continue;
		}else{
			cnt= cnt+ tonguoc(a);
		}
	}
	printf("%lld",cnt);
	return 0;
}
