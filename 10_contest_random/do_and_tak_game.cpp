/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("dotak.in", "r", stdin);
    int t;
    string om="Omda", te="Teemo";
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        if (k % 2)
            cout << ((n % 2) ? om : te) << endl;
        else {
            n %= k + 1;
            if (n <= 1) cout << ((n % 2) ? om : te) << endl;
            else cout << (((n + 1) % 2) ? om : te) << endl;
        }
    }
    cout << flush;
    return 0;
}
