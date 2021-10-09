#include<stdio.h>
#include<string.h>
int check(char s[]){
    int n=strlen(s)+1,i,up=0,t;
    for(i=n-2;i>=0;i--){
        t = s[i]-'0';
        if((t*n+up)%10!=9) return 0;
        up=(t*n+up)/10;
    }
    return 1;
}
main(){
    int t; char s[100];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        printf(check(s)?"YES\n":"NO\n");
    }
}
