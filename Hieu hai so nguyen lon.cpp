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

void tru (char a[], char b[])
{
    int i,n = strlen(a), m = strlen(b);
    daonguoc(a);
    daonguoc(b);
    for (i=0;i<n-m;i++) strcat(b,"0");
    int nho = 0,t;
    char hieu[500];
    for (i=0;i<n;i++){
        t = (a[i]-'0') - (b[i]-'0') - nho;
        if (t<0){
            t+=10;
            nho = 1;
            hieu[i] = t + '0';
        }
        else{
             hieu[i] = t + '0';
             nho = 0;
        }
    }
    if (hieu[n-1]=='0') hieu[n-1] = '\0';
    else hieu[n] = '\0';
    daonguoc(hieu);
    strcpy(s,hieu);
    puts(s);
}

main()
{
    int t; scanf("%d",&t);
    while(t--){
        char a[501], b[501];
        scanf("%s%s",&a,&b);
        int n = strlen(a), m = strlen(b);
        if (n>m) tru(a,b);
        else if (n<m) tru(b,a);
        else{
            if (strcmp(a,b)<0) tru(b,a);
            else tru(a,b);
        }
    }
}
