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

int main(){
    int n;
    cin>>n;
    int high1 = 0;
    int low1 = 1000000000;
    fori(i,n){
        int l1,r1;
        cin>>l1>>r1;
        low1 = min(low1,r1);
        high1 = max(high1,l1);
    }
    int m;
    cin>>m;
    int high2 = 0;
    int low2 = 1000000000;
    fori(i,m){
        int l2,r2;
        cin>>l2>>r2;
        low2=min(low2,r2);
        high2 = max(high2,l2);
    }
    int dist = max(high2-low1, high1-low2);
    dist = max(dist,0);
    cout<<dist;

   return 0;
}
