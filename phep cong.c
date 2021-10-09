#include<stdio.h>
int main()
{
    int a,c,e;
    int b,d;
    scanf("%d %c %d %c %d",&a,&b,&c,&d,&e);
    if ((a+c)==e) printf("YES");
    else printf("NO");
    return 0;
}
