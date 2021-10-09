#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    char c;
    if (a<=b)
    {
        for (i=0;i<a;i++)
        {
            c = 'a'+b-1;
            printf("%c",c);
            for (j=1;j<b;j++)
                if (j<=i) printf("%c",c-j);
                else printf("%c",c-i);
            printf("\n");
        }
    }
    else
    {
        for (i=0;i<a;i++)
        {
            c = 'a'+a-1;
            printf("%c",c);
            for (j=1;j<b;j++)
                if (j<=i) printf("%c",c-j);
                else printf("%c",c-i);
            printf("\n");
        }
    }
}
