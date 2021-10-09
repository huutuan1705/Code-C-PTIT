#include<stdio.h>
#include<string.h>

int main()
{
    int t; char s[1000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        int n = strlen(s);
        for (int i=0;i<n;i+=2){
            for (int j=0;j<s[i+1]-48;j++) printf("%c",s[i]);
        }
        printf("\n");
    }
}
