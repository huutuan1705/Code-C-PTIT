#include<stdio.h>
#include<string.h>
int checkdx(int a[], int t){
	for (int i=0; i<=t/2;i++)
	if (a[i]!=a[t-i-1] ) return 0;
	return 1;
}
int main()
{
    int t,a[1000]; char s[1000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        int n = strlen(s);
        for (int i=0;i<n;i++)
            if (s[i]>='A' && s[i]<='Z') s[i] = s[i]+32;
        for (int i=0;i<n;i++){
            if (s[i]=='a' || s[i]=='b' || s[i]=='c') a[i] = 2;
            if (s[i]=='d' || s[i]=='e' || s[i]=='f') a[i] = 3;
            if (s[i]=='g' || s[i]=='h' || s[i]=='i') a[i] = 4;
            if (s[i]=='j' || s[i]=='k' || s[i]=='l') a[i] = 5;
            if (s[i]=='m' || s[i]=='n' || s[i]=='o') a[i] = 6;
            if (s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s') a[i] = 7;
            if (s[i]=='t' || s[i]=='u' || s[i]=='v') a[i] = 8;
            if (s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z') a[i] = 9;
        }
        if (checkdx(a,n)) printf("YES\n");
        else printf("NO\n");
    }
}
