#include<stdio.h>

/*	Chuong trinh tim phan tu co so lan xuat hien nhieu nhat trong mang
	Y tuong: dung mang b[], trong do b[i] se luu so lan xuat hien cua phan tu thu i trong mang a[].
	B1: khoi tao mang b[n] = {0};
	B2: for( i = 0; i< n; i++ ){
			for( j = i; j < n; j++ ){
				if( a[j] == a[i] ) b[i] = b[i] + 1;
			}
		}
	B3: tim phan tu max trong cac phan tu b[i] va xuat ra a[i] tuong ung.
*/

void sol( int a[], int b[] , int n ){
    int i,j;
	for( i = 0; i< n; i++ ){
		for( j  = i; j < n; j++ ){
			if( a[j] == a[i] ) b[i]++;
		}
	}
}

void xuat( int a[], int b[], int n ){
	int max = 1,i;
	for( i = 0; i< n; i++ ){
		if( b[i] > max ) max = b[i];
	}
	for( i = 0; i< n; i++ ){
		if( b[i] == max )
			printf("%d ", a[i]);
	}
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a[100], b[100] = {0};
        int n,i;
        scanf("%d",&n);
        for (i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sol( a, b, n );
        xuat( a, b, n );
        printf("\n");
    }
	return 0;
}
