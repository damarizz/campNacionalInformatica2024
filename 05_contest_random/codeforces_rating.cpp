/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)

int main()
{
   fastio;
   int t,n,r,p=1500;
   cin>>t;
   fori(i,t){
      int sum=0;
      cin>>n>>r;
      fori(j,n){
         int a_i;
         cin>>a_i;
         sum+=a_i;
      }
      if(sum+p==r)cout<<"Correct\n"; else cout<<"Bug\n";
   }
   return 0;
}
