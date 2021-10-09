#include<stdio.h>
#include<string.h>
char L[] = "IVXLCDM";
int A[] = {1,5,10,50,100,500,1000};
int vitri(char c)
{
    for (int i=0;i<7;i++) if (L[i]==c) return i;
}
int tinh(char s[])
{
    int n = strlen(s),i;
    int kq = A[vitri(s[n-1])];
    for (i=n-1;i>0;i--){
        int sau = vitri(s[i]);
        int truoc = vitri(s[i-1]);
        if (A[truoc]>=A[sau]) kq = kq + A[truoc];
        else kq = kq - A[truoc];
    }
    return kq;
}
int main()
{
    int t;
    char s[100];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&s);
        printf("%d\n",tinh(s));
    }
}
