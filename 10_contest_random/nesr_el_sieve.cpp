/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)

template<typename T>
T gcd(T a, T b) {
    while (a != 0) {
        T temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int main()
{
    fastio;
    freopen("sieve.in", "r", stdin);
    int _;
    cin>>_;
    while(_--){
        string s, t;
        cin>>s>>t;
        cout<<(gcd((int)s.size(), (int)t.size()))<<endl;
    }
    cout<<flush;
    return 0;
}
