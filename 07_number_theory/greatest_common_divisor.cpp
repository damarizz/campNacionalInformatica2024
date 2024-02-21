/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)

int main()
{
    fastio;
    long long a,b,c;
    cin>>a>>b;
    c=__gcd(a,b);
    cout<<c;
    return 0;
}
