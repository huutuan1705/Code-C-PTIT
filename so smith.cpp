#include<stdio.h>
#include<math.h>
int tong(int x){
	int a;
	int s=0;
	while(x!=0){
		a=x%10;
		x=x/10;
		s=s+a;
	}
	return s;
}
int snt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int p=0;
	int k=tong(n);
	for(int i=1;i<=n;i++){
		while(n%i==0&&snt(i)){
			p=p+tong(i);
		//	int j=n/i;
			n=n/i;
		//	if(snt(j))p=p+tong(j);
		//	printf("%d %d ",i,j) ;
		}
	}
//	printf("%d ",p) ;
	if(k==p)printf("YES");
	else printf("NO");
}
