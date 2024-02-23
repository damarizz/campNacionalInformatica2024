/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)

int main()
{
    fastio;
    int n, q;
    cin>>n>>q;
    vector<int> arr(n);
    vector<long long> prefix_sum(n + 1, 0);
    fori(i, n){
        cin>>arr[i];
        prefix_sum[i + 1] = prefix_sum[i] + arr[i];
    }
    fori(i, q){
        int l, r;
        cin>>l>>r;
        cout<<prefix_sum[r] - prefix_sum[l]<<"\n";
    }
    return 0;
}
