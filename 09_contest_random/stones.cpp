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

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<char> dp(k + 1, 'l');
    dp[0] = 'l';
    for (int stones = 1; stones <= k; ++stones) {
        for (int x : a) {
            if (stones - x >= 0 && dp[stones - x] == 'l') {
                dp[stones] = 'w';
                break;
            }
        }
    }
    cout << (dp[k] == 'w' ? "First" : "Second");
    return 0;
}
