#include <stdio.h>
#include <string.h>

/* CACH 1:
int WordCount(char str[], int length)
{
    int i;
    int word = (str[0] != ' ');
    for (i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
int main()
{
    int t,i;
    scanf("%d ",&t);
    for (i=1;i<=t;i++)
    {
        scanf(" ");
        char str[200];
        gets(str);
        int length = strlen(str) - 1;
        str[length] = '\0';
        printf("%d\n", WordCount(str, length));
    }
}
*/
// CACH 2:
int demtu(char s[])
{
    int d=0;
    char *p = strtok(s," ");
    while(p!=NULL){
        d++;
        p = strtok(NULL," ");
    }
    return d;
}
int main()
{
    int t;
    char s[200];
    scanf("%d\n",&t);
    while(t--){
        gets(s);
        printf("%d\n",demtu(s));
    }
}
