#include<stdio.h>
#include<string.h>
int checkdx(char a[500]){
	int t=strlen(a),i;
	if (a[0]!='8' && a[t-1]!='8') return 0;
	for (i=0; i<=t/2;i++)
	if (a[i]!=a[t-i-1] ) return 0;
	return 1;
}
int checkcl(char a[500]){
	int t=strlen(a),i,d=0;
	for (i=0;i<t;i++){
		d+=a[i]-'0';
	}
	if (d%10==0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf(" ");
            char s[500];
        gets(s);
        if ((checkdx(s))&&(checkcl(s))) printf("YES\n");
        else printf("NO\n");
    }
}
