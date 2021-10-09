#include<stdio.h>
int main()
{
    int n,i,j;
    char c;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        c = 'A' + n - i - 1;
        for (j=i;j<=n;j++)
        {
            printf("%c",c);
            c+=1;
        }
        printf("\n");
    }
    return 0;
}
