#include<stdio.h>
#include<string.h>
/*int main()
{
    char a[101],b[101];
    gets(a);
    gets(b);
    int m = strlen(a), n = strlen(b),i,j;
    for (i=0;i<m;i++){
        if (a[i]==b[0]&&a[i+n-1]==b[n-1])
        {
            for (j=i;j<n+i+1;j++)
                a[j]='*';
            i+=n;
        }
    }
    for (i=0;i<m;i++)
        if (a[i]!='*') printf("%c",a[i]);
}
*/
int main()
{
    char ds[100][50], s[50];
    int n=0,i;
    while(scanf("%s",&s)!=-1)
        strcpy(ds[n++],s);
    for (i=0;i<n-1;i++)
        if (strcmp(ds[i],ds[n-1])==0) printf("%s ",ds[i]);
}
