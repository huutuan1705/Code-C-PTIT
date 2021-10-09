#include<stdio.h>
#include<string.h>
struct tu {
    char nd[100];
    int solan;
};

struct tu ds[1000]; int n=0;

int tim (char s[])
{
    for (int i=0;i<n;i++)
        if (strcmp(ds[i].nd,s)==0) return i;
    return -1;
}

int main()
{
    char s[100];
    while (scanf ("%s",s)!=-1){
            int i = tim(s);
            if (i==-1){
                strcpy(ds[n].nd,s);
                ds[n].solan = 1;
                n++;
            } else ds[i].solan++;
        }
    int i,m=0;
    for (int i=0;i<n;i++) if (strlen(ds[i].nd) > m) m = strlen(ds[i].nd);
    for (int i=0;i<n;i++) if (strlen(ds[i].nd) == m)
        printf("%s %d %d\n",ds[i].nd,m,ds[i].solan);
}
