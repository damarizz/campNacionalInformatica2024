/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int t;
    string a,b;
    cin>>t;
    while(t--){
      cin>>a>>b;
    int f1=0,f2=0;
    fori(i,a.size()-2)
    {
        if(i<a.size()-3&&a.substr(i,4)==b) f1=1;
        if(a[i]==b[0]&&a[i+1]==b[1]&&a[i+2]==b[2]) f2=1;
        if(a[i]==b[0]&&a[i+1]==b[2]&&a[i+2]==b[3]) f2=1;
        if(a[i]==b[0]&&a[i+1]==b[1]&&a[i+2]==b[3]) f2=1;
        if(a[i]==b[1]&&a[i+1]==b[2]&&a[i+2]==b[3]) f2=1;
    }
    if(f1) cout<<"good\n";
    else if(f2) cout<<"almost good\n";
    else cout<<"none\n";
    }
    return 0;
}
