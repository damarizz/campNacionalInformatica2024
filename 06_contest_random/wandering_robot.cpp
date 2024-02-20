/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)
#define ll long long

void solve(){
    int n,k;
    char a[100010];
    ll x=0, y=0, mh=0;
    cin>>n>>k;
    cin>>a;
    fori(i,n){
        if (a[i] == 'L') x--;
        else if (a[i] == 'R') x++;
        else if (a[i] == 'U') y++;
        else if (a[i] == 'D') y--;
        mh=max(mh, abs(x)+abs(y));
    }
    x*=(k-1); y*=(k-1);
    fori(i,n){
        if (a[i] == 'L') x--;
        else if (a[i] == 'R') x++;
        else if (a[i] == 'U') y++;
        else if (a[i] == 'D') y--;
        mh=max(mh, abs(x)+abs(y));
    }
    cout<<mh<<endl;
}

int main()
{
    fastio;
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
