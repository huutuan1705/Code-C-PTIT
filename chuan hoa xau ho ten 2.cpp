#include<stdio.h>
#include<string.h>
void xoa(char a[], int x)
{
	int n = strlen(a);
		for (int k = x; k < n - 1; k++)
			a[k] = a[k + 1];
		a[n - 1] = '\0';
}
int main(){
   int t;
   int k;
	scanf ("%d ",&t);
	while (t--){
		char a[55];
		gets(a);
		int n = strlen(a);
		//viet thuong cu o giua
    for (int i=0;i<n;i++){
    		if(a[i]>='A' && a[i] <= 'Z')
    		{
    			a[i]+=32;
			}
		}
	//xoa dau cách th?a
	while (a[n-1] == 32)
	{
		xoa(a, n-1);
		n--;
	}
	while (a[0] == 32)
	{
		xoa(a, 0);
		n--;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 32)
			while (a[i + 1] == 32)
			{
				xoa(a, i + 1);
				n--;
			}

	}
		//vi?t hoa d?u ḍng
            int i;
            if (a[0] != 32)
            {
            if (a[0] >='a' && a[0]<= 'z')
       		 {
                       a[0] -= 32;
                  }
            }
            for (i = 0; i < n; i++)
            {
                        if (a[i] == 32)
                        {
        if (a[i + 1]>='a' && a[i + 1] <= 'z')
        {
        a[i + 1] -= 32;
	}
           }
    }
     for(int i=0;i<n;i++){
     	if(a[i]==32&&a[i+1]!=32){
     		k=i;
			 break;
		 }
	 }
	 for(int i=k+1;i<n;i++){
	 	printf("%c",a[i]);
	 }
	 printf(", ");
	 for(int i=0;i<=k;i++){
	 	if(a[i]>='a'&&a[i]<='z'){
	 		a[i]=a[i]-32;
			 printf("%c",a[i]);
		 }
		 else printf("%c",a[i]);
	 }
	 printf("\n");
	}
}
