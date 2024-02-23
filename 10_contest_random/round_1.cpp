/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)
#define yesi cout<<"Yes"<<'\n'
#define nosi cout<<"No"<<'\n'

int main()
{
    //freopen("Round1.in", "r", stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=27){
            nosi;
        } else {
            yesi;
        }
    }

    cout<<flush;
    return 0;
}
