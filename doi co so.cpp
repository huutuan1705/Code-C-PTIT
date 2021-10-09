#include<stdio.h>
#include<string.h>
void doicoso (int n, int b)
{
    char s[1000]; int i=0, t;
    while(n>0){
        t = n%b;
        n=n/b;
        if (t<10) s[i] = '0' + t;
        else s[i] = 'A' + (t-10);
        i++;
    }
    s[i] = '\0';
    for (int j=i-1;j>=0;j--) printf("%c",s[j]);
}
int main()
{
    int t,n,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&b);
        doicoso(n,b);
        printf("\n");
    }
}
