/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)
#define fora(a,b,c) for(int i=a;i<b;i+=c)
#define sila cout<<"YES"<<'\n'
#define nola cout<<"NO"<<'\n'
#define endl '\n'

bool isBalanced(string brackets) {
    stack<char> s;

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            s.push(bracket);
        } else {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            if ((bracket == ')' && top == '(') || (bracket == ']' && top == '[') || (bracket == '}' && top == '{')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main()
{
   fastio;
   int n;
   cin>>n;
   fori(i, n) {
      string s_i;
      cin >> s_i;
      if(isBalanced(s_i)) {
         sila;
      } else{
         nola;
      }
   }

   return(0);
}
