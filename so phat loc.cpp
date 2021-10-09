#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s[500];
    scanf("%d\n",&t);
    while(t--){
        scanf("%s",&s);
        int n = strlen(s);
        if (s[n-1]=='6' && s[n-2]=='8') printf("YES\n");
        else printf("NO\n");
    }
}
