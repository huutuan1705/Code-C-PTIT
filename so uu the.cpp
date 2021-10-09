#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        scanf(" ");
        char s[1000];
        gets(s);
        int n = strlen(s),b[9]={0},d1=0,d2=0,a=1;
        for (int i=0;i<n;i++){
            if (s[i]<'0'||s[i]>'9'||s[0]=='0'){
                printf("INVALID\n");
                a=0;
                break;
            }
            if ((s[i]-48)%2==0) d1++;
            else d2++;
        }
        if (((d1>d2 && n%2==0) || (d1<d2 && n%2!=0)) && a==1 ) printf("YES\n");
        else (a==1?printf("NO\n"):printf(""));
    }
}

