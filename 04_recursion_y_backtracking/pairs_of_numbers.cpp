/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i, n) for(int i = 0; i < n; i++)
#define fora(a, b, c) for(int i = a; i < b; i += c)

int temp;
int top = 1000000000;
void transf(int a, int b) {
    if (b == 0) {
        temp = top;
        return;
    } else if (b == 1) {
        temp += a - 1;
        return;
    }
    temp += a / b;
    transf(b, a % b);
}

int main() {
   fastio;
   int n;
   cin>>n;
   int k = n - 1;
   fori(i, n - 1) {
      temp = 0;
      transf(n, i + 1);
      k = min(k, temp);
   }
   cout << k;
   return 0;
}
