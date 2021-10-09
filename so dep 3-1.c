#include<stdio.h>
#include<string.h>
#include<math.h>
int checkdx(char a[500]){
	int t=strlen(a),i;
	for (i=0; i<=t/2;i++)
	if (a[i]!=a[t-i-1] ) return 0;
	return 1;
}
int ngto (char a[500]){
	int i,j,t=strlen(a);
	for (i=0;i<t;i++){
        if (a[i]<'2') return 0;
        for (j=2;j<=sqrt(a[i]-48);i++)
            if ((a[i]-48)%2==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf(" ");
		int d=0;
            char s[500];
        gets(s);
        if (checkdx(s)&&ngto(s)) printf("YES\n");

        else printf("NO\n");
    }
}

