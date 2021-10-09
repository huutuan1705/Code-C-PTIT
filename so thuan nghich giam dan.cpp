#include<stdio.h>
#include<string.h>
struct tu {
    char nd[100];
    int solan;
};

struct tu ds[1000]; int n=0;
int thuannghich (char s[])
{
    int d=0, c = strlen(s)-1;
    while(d<c){
        if (s[d]!=s[c]) return 0;
        d++;c--;
    }
    return 1;
}
int tim (char s[])
{
    for (int i=0;i<n;i++)
        if (strcmp(ds[i].nd,s)==0) return i;
    return -1;
}

int main()
{
    char s[100],tp[100];
    while (scanf ("%s",s)!=-1){
            if (thuannghich(s)){
                int i = tim(s);
                if (i==-1){
                    strcpy(ds[n].nd,s);
                    ds[n].solan = 1;
                    n++;
                } else ds[i].solan++;
            }
        }
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (strcmp(ds[j].nd,ds[i].nd)){
                swap(ds[i],ds[j]);
            }
    for (int i=0;i<n;i++)
        printf("%s %d\n",ds[i].nd,ds[i].solan);
}
