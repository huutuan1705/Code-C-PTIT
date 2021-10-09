#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    int n = strlen(s), h = 0, t = 0;
    for (int i=0;i<n;i++)
        if (s[i]>='A' && s[i] <='Z') h++;
        else t++;
    if (h>t)
        for (int i=0;i<n;i++)
            if (s[i]>='a' && s[i]<='z') printf("%c",s[i]-32);
            else printf("%c",s[i]);
    else
        for (int i=0;i<n;i++)
            if (s[i]>='A' && s[i]<='Z') printf("%c",s[i]+32);
            else printf("%c",s[i]);
}
