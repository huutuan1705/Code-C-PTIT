#include<stdio.h>
int main()
{
    int a,b,i,j;
    char c;
    scanf("%d%d",&a,&b);
    if(a<=b)
    {
        for (i=0;i<a;i++)
        {
            int t=0;
            c = 'A';
            for (j=i;j<b;j++){
                printf("%c",c+j);
                t++;
            }
            if (c='D' && t<b)
            for (j=i-1;j>=0;j--) {
                printf("%c",'A'+j);
                t++;
                if (t==b) break;
            }
            printf("\n");
        }
    }
    else{
        for (i=0;i<a;i++)
        {
            if (i<b)
            {
                int t=0;
                c = 'A';
                for (j=i;j<b;j++){
                    printf("%c",c+j);
                    t++;
                }
                if (c='D' && t<b)
                for (j=i-1;j>=0;j--) {
                    printf("%c",'A'+j);
                    t++;
                    if (t==b) break;
                }
                printf("\n");
            }
            else{
                c = 'A'+b-1;
                for (j=0;j<b;j++){
                    printf("%c",c-j);
                }
                printf("\n");
            }
        }
    }
}
