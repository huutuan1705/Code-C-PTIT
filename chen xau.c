#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char k[100];
    gets(s);
    scanf("\n");
    gets(k);
    scanf("\n");
    int p,i;
    scanf("%d",&p);
    p=p-1;
    for (i=0;i<p;i++) printf("%c",s[i]);
    for (i=0;i<strlen(k);i++) printf("%c",k[i]);
    for (i=p;i<strlen(s);i++) printf("%c",s[i]);
}
