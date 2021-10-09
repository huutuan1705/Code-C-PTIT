#include<stdio.h>
#include<string.h>

char s1[100000],s2[100000];
int abs (int a)
{
    if (a<0) return -a;
    return a;
}
int xuly (char s1[], char s2[], int n)
{

    for (int i = 1;i < n;i++)
        if (abs(s1[i]-s1[i-1]) != abs(s2[i]-s2[i-1])) return 0;
        return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s1);
        int n = strlen(s1);
        for (int i = 0;i<n;i++)
            s2[i] = s1[n-i-1];
        if (xuly(s1,s2,n)) printf("YES\n");
        else printf("NO\n");
    }
}
