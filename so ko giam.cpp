#include<stdio.h>
#include<string.h>
int main()
{
    int t; char s[501];
    scanf("%d\n",&t);
    while(t--){
        gets(s);
        int d=0;
        for (int i=0;i<strlen(s)-1;i++)
            if (s[i]>s[i+1]) d++;
        if (d==0) printf("YES\n");
        else printf("NO\n");
    }
}
