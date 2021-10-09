#include<stdio.h>
#include<string.h>
int tim(char s[], char ds[100][50], int n){
    for(int i=0; i<n; i++){
    if(strcmp(s,ds[i])==0)
    return i;
    }
    return -1;
}
main(){
    char ds[100][50], s[50]; int b[100],n=0;
    while(scanf("%s",&s)!=-1){
        for (int i = 0;i<strlen(s);i++)
            if (s[i]>='A' && s[i]<='Z') s[i] += 32;
        int t=tim(s,ds,n);
        if(t==-1){
            strcpy(ds[n],s); b[n]=1;
            n++;
        }else b[t]++;
        }
    for(int i=0; i<n; i++)
    printf("%s %d\n",ds[i],b[i]);
}
