/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0)
using namespace std;

int main()
{
    fastio;
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,s,y;
        x=s=0;
        cin >> n;
        while (n--)
        {
         cin >> y;
         s+=y;
         x=__gcd(x, y);
        }
        cout<<x<<" "<<s/x<<"\n";
    }
    return 0;
}
