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
        int n = strlen(s),b[9]={0},d=0,a=1;
        for (int i=0;i<n;i++){
            if (s[i]<'0'||s[i]>'9'||s[0]=='0'){
                printf("INVALID\n");
                a=0;
                break;
                }
            b[s[i]-48]++;
        }
        for (int i=0;i<9;i++)
            if (b[i]==0) d++;
        if (d==0&&a==1) printf("YES\n");
        if (d!=0&&a==1) printf("NO\n");
    }
}
