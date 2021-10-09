#include <stdio.h>
#include <math.h>
int Max(int a, int b){
    if (a>b) return a;
    return b;
}
int abs(int n){
    if (n>0) return n;
    return -n;
}
int main() {

	int n,i,j;
    scanf("%d",&n);

    for (i = n; i >= 1; --i) {
        for (j = n; j >= 1; --j) {
            printf("%d",1 + Max(abs(j-1),abs(i-1)));
        }

        for (j = 2; j <= n; ++j) {
            printf("%d",1 + Max(abs(j-1),abs(i-1)));
        }

        printf("\n");
    }

    for (i = 2; i <= n; ++i) {
        for (j = n; j >= 1; --j) {
            printf("%d",1 + Max(abs(j-1),abs(i-1)));
        }

        for (j = 2; j <= n; ++j) {
            printf("%d",1 + Max(abs(j-1),abs(i-1)));
        }

        printf("\n");
    }

	return 0;
}
