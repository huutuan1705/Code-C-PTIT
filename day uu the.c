#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--){
        char c;
        int a[201], i, n=0, dem1 = 0, dem2 = 0;
        do{
            scanf("%d",&a[n++]);
            c = getchar();
        } while(c!='\n');
        for (i=0;i<n;i++)
            if (a[i]%2==0) dem1++;
            else dem2++;
       if ( (dem1>dem2 && n%2==0) || (dem1<dem2 && n%2!=0) ) printf("YES\n");
       else printf("NO\n");
    }
}
