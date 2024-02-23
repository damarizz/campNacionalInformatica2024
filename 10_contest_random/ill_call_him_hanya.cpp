/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)

int main()
{
    freopen("hanya.in", "r", stdin);
    int t;
    cin>>t;
    while (t--){
        int n;
        bool ri=0,le=0;
        cin>>n;
        fori(i,n){
            int x;
            cin>>x;
            if(x>0){
                ri=true;
            }
            if (x<0) {
                le=true;
            }
        }
        cout<<ri+le<<'\n';
    }
    cout << flush;
    return 0;
}
