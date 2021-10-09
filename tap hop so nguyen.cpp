/* Cho dãy số a có n phần tử, dãy số b có m phần tử.
A là tập các số khác nhau trong A, B là tập các số khác nhau trong B.
Tìm giao của A và B, hiệu A-B, B-A.
*/

#include<stdio.h>

int main()
{
    int a[100],b[100], A[1000]={0}, B[1000]={0},n,m,i;
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    for (i=0;i<m;i++) scanf("%d",&b[i]);
    for (i=0;i<n;i++) A[a[i]]++;
    for (i=0;i<m;i++) B[b[i]]++;
    for (int i=0;i<1000;i++) if (A[i]>0 && B[i]>0) printf("%d ",i);
    printf("\n");
    for (int i=0;i<1000;i++) if (A[i]>0 && B[i]==0) printf("%d ",i);
    printf("\n");
    for (int i=0;i<1000;i++) if (A[i]==0 && B[i]>0) printf("%d ",i);
    printf("\n");
}
