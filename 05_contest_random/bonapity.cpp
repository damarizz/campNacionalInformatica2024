/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;

string s1,s2;

void solve()
{
    cin>>s1>>s2;
    for(auto &c:s1)
    {
        if(c>='A'&&c<='Z') c=c-'A'+'a';
        if(c=='p') c='b';
        if(c=='i') c='e';
    }
    for(auto &c:s2)
    {
        if(c>='A'&&c<='Z') c=c-'A'+'a';
        if(c=='p') c='b';
        if(c=='i') c='e';
    }
    if(s1==s2) cout<<"Yes\n"; else cout<<"No\n";
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
         solve();
    }
    return 0;
}
