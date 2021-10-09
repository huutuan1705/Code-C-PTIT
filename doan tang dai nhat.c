/*#include <stdio.h>

typedef long long ll;

int n, a[100], max, tmp;

void nhap() {
    scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	max = 0;
	tmp = 1;
}

void findmax() {
	for (int i = 0; i < n-1; i++) {
		if (a[i] < a[i+1]) tmp++;
		else tmp = 1;
		if(max < tmp) max = tmp;
	}
}

int Try(int i) {
	for (int j = i+1; j < i+max; j++)
		if(a[j] <= a[j-1])
			return 0;
	return 1;
}

void xuat(int i) {
	for (int j = i; j < i+max; j++)
		printf("%d ", a[j]);
	printf("\n");
}

void solve() {
	for (int i = 0; i < n-max+1; i++)
		if(Try(i)) {
			xuat(i);
			i += max-1;
		}
}

int main () {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		nhap();
		findmax();
		printf("Test %d:\n", i);
		printf("%d\n", max);
		solve();
	}
	return 0;
}
*/
#include <stdio.h>
void nhap() {
    scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}
