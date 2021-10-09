#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m[4]={6,28,496,8128};
    int i;
    for(i=0;i<4;i++)
    {
        if (m[i]<n) printf("%d ",m[i]);
    }
}
