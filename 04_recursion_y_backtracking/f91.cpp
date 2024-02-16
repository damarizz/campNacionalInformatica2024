/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)
#define fora(a,b,c) for(int i=a;i<b;i+=c)

ll f91(ll n)
{
   int value;
   if (n <= 100)
      value = 91;
   else if (n > 100)
      value = n - 10;
   return value;
}

int main() {
   fastio;
   ll n, result;
   while (cin>>n and n != 0)
   {
      result = f91(n);
      cout << "f91("<<n<<") = "<<result<<"\n";
   }
   return 0;
}
