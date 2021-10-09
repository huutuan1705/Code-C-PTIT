#include<iostream>
#include<cmath>
using namespace std;
int n;
int a[100];
void input() {
 cin >> n;
 for(int i = 0; i < n; i++)
  cin >> a[i];
}

bool nto(int x) {
 if(x < 2) return false;
 for(int i = 2; i <= sqrt(x); i++)
  if(x%i == 0)
   return false;
 return true;
}

bool NotInArray(int t, int b[100], int m) {
 for(int i = 0; i < m; i++)
  if( t == b[i] )
   return false;
 return true;
}

int dem(int x) {
 int dem = 0;
 for(int i = 0; i < n; i++) {
  if(a[i] == x)
   dem++;
 }
 return dem;
}

void output() {
 int b[100];
 int m = 0;
 for(int i = 0; i < n; i++) {
  if(NotInArray(a[i],b,m) && nto(a[i]))
   b[m++] = a[i];
 }

 for(int i = 0; i < m; i++) {
  for(int j = i + 1; j < m; j++) {
   if(b[i] > b[j]) {
    int t = b[i];
    b[i] = b[j];
    b[j] = t;
   }
  }
 }
 for(int i = 0; i < m; i++)
  cout << b[i] << " " << dem(b[i]) << endl;

}

int main() {
 input();
 output();
}
