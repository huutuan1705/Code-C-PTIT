#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("\n");
		char s[100];
		gets(s);
		int i,j;
		for (i=0;i<strlen(s);i++)
		{
			if (s[i]>='A'&&s[i]<='Z') s[i]+=32;
		}
		printf ("%c",s[0]-32);
		for(i=1;i<strlen(s);i++)
		{
			printf ("%c",s[i]);
			if (s[i+1]==32) break;
		}
		printf (" ");
		for (i=0;i<strlen(s);i++)
		{
			if (s[i-1]==32&&s[i]!=32)
			{
				printf ("%c",s[i]-32);
				for (j=i+1;j<strlen(s);j++)
				{
					printf ("%c",s[j]);
					if (s[j+1]==32) break;
				}
			printf (" ");
			}
		}
		printf ("\n");
	}
}
