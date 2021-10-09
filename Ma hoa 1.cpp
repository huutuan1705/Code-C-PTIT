#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("\n");
		char s[1001];
		gets (s);
		int len=strlen(s),dem=1;
		for (int i=0;i<len;i++)
		{
			if (s[i]==s[i+1]) dem++;
			else
			{
				printf ("%d",dem);
				printf ("%c",s[i]);
				dem=1;
			}
		}
		printf ("\n");
	}
}
