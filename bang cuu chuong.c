#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int d=0, dem1 = 0, dem2 = 0,i;
        char s[201];
        scanf(" ");
        gets(s);
        int n = strlen(s);
        for (i=0;i<n;i++)
            if (s[i]>='0'&&s[i]<=9){
                if ((s[i]-48)%2==0) dem1++;
                else dem2++;
                d++;
            }
        if ((dem1>dem2 && d%2==0)||(dem1<dem2 && d%2!=0)) printf("YES\n");
        else printf("NO\n");
    }
}
