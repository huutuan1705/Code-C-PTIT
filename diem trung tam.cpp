#include<stdio.h>
int check1(int n,int a[100005],int b[100005]){
	int k=a[1];
	for(int i=1;i<n;i++){
		 if(k!=a[i]&&k!=b[i])return 0;
	}
	return 1;
}
int check2(int n,int a[100005],int b[100005]){
	int h=b[1];
	for(int i=1;i<n;i++){
		 if(h!=a[i]&&h!=b[i])return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	int a[100005],b[100005];
	for(int i=1;i<t;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	if(check1(t,a,b)||check2(t,a,b))printf("Yes");
	else printf("No");
}
