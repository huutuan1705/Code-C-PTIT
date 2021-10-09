#include<stdio.h>
int main()
{
    int n;
    scanf(" %d",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        char c;
        scanf(" %c",&c);
        if ('a'<=c && c<='z') printf("%c\n",c-32);
        if ('A'<=c && c<='Z') printf("%c\n",c+32);
    }
}
