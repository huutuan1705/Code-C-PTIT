#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    int n = strlen(s);
    for (int i = 0;i<n;i++)
        if (s[i]>='A' && s[i]<='Z') s[i] = s[i]+32;
    for (int i = 0;i<n;i++)
        if (s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
            printf(".%c",s[i]);
}
