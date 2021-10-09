#include <stdio.h>
#include <string.h>
char s[201];
void daonguoc(char s[])
{
    char s1[500]; int n = strlen(s),i,j=0;
    for (i=n-1;i>=0;i--) s1[j++] = s[i];
    s1[n] = '\0';
    strcpy(s,s1);
}
void cong(char a[], char b[])
{
    int i,n = strlen(a), m = strlen(b);
    daonguoc(a);
    daonguoc(b);
    strcat(a,"0");
    for (i=0;i<=n-m;i++) strcat(b,"0");
    int nho = 0,t;
    char tong[500];
    for (i=0;i<=n;i++){
        t = (a[i]-'0') + (b[i]-'0') + nho;
        nho = t/10;
        t=t%10;
        tong[i] = '0'+t;
    }
    if (tong[n]=='0') tong[n] = '\0';
    else tong[n+1] = '\0';
    daonguoc(tong);
    strcpy(s,tong);
    puts(s);
}

main()
{
    int t; scanf("%d",&t);
    while(t--){
        char a[501], b[501];
        scanf("%s%s",&a,&b);
        cong(a,b);
    }
}
