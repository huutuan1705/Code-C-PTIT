#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	char s[100], ds[50][50], add[50]="";
	int n=0, i;
	gets(s);
	char *p = strtok(s," ");
	while(p!=NULL){
        for(i=0;i<strlen(p);i++) p[i]=tolower(p[i]);
        strcpy(ds[n],p);
        n++;
        p=strtok(NULL," ");
	}
    for(i=0;i<n-1;i++) strncat(add,ds[i],1);
    strcat(add,ds[n-1]);
    printf("%s",add);
	printf("@ptit.edu.vn");
}
