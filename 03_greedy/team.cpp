/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)
#define fora(a,b,c) for(int i=a;i<b;i+=c)
#define yesi cout<<"YES"<<'\n'
#define nosi cout<<"NO"<<'\n'

int  main() {
   string s;
   int k;
   cin>>s>>k;
   vector<int> v(26);
   fori(i,26){
      cin>>v[i];
   }
   int value=0,num;
   fori(i,s.length()){
      num=(i+1)*v[s[i]-'a'];
      value+=num;
   }
   auto it=max_element(v.begin(),v.end());
   int l=(*it);
   for(int i=s.length()+1;i<=k+s.length();i++){
      num=i*l;
      value+=num;
   }
   cout <<value;
   return 0;
}
