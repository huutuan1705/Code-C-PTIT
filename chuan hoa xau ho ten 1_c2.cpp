#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuanhoa(char s[])
{
    int i;
    char *p = strtok(s," ");
    while(p!=NULL){
        p[0] = toupper(p[0]);
        for (i=0;i<strlen(p);i++) p[i] = tolower(p[i]);
        printf("%s ",p);
        p = strtok(NULL," ");
    }
    printf("\n");
}
int main()
{
    int t; char s[100];
    scanf("%d\n",&t);
    while(t--){
        gets(s);
        chuanhoa(s);
    }
}
