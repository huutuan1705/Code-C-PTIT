#include <stdio.h>
#include <string.h>

int main(){
	char a[100], b[100];
	gets(a);
	int l = strlen(a), t, n;
	for (int i = 0; i < l; i++){
		if (a[i] == ' '){
			b[t] = '\0';
			t = 0;
			n = strlen(b);
			for (int j = i + 1; j < l; j++){
				if (a[j] == b[0] && a[j + n - 1] == b[n - 1] && a[j + n - 2] == b[n - 2]){
				    for (int k = j; k < j + n + 1; k++) a[k] = '*';
				}
			}
		}
		else if (a[i] != '*'){
			b[t] = a[i];
			t++;
		}
	}
	for (int i = 0; i < l; i++)
	if (a[i] != '*') printf ("%c", a[i]);
}
