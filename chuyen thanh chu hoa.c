#include<stdio.h>
#include<string.h>
char *inhoa( char str[])
{
    int i, n = strlen(str);
    for (i=0;i<n;i++)
    {
        if (str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    return (str);
}
int main()
{
    char str[100];
    gets(str);
    printf("%s",inhoa(str));
    return 0;
}
