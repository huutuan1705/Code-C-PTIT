#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,a=0,b=0,c=0;
    gets(s);
    for (i=0;i<strlen(s);i++)
    {
        if ((s[i]<='z' && s[i]>='a')||(s[i]<='Z' && s[i]>='A'))
            a++;
        else if (s[i] >= '0' && s[i] <= '9')
            b++;
        else c++;
    }
    printf("%d %d %d",a,b,c);
}
