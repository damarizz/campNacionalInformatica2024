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

int main() {
    fastio;

    map<long long, long long> mp;

    long long n, k;
    cin >> n >> k;
    long long winner = 0;
    queue<long long> q;

    fori(i, n) {
        long long c;
        cin >> c;
        q.push(c);
    }

    winner = q.front();
    q.pop();
    long long times = 0;

    if (n > 2) {
        for (int i = 0; i < 1000; i++) {
            long long value = q.front();
            q.pop();

            if (value > winner) {
                if (times == k) break;

                winner = value;
                times = 1;
                q.push(winner);
            } else {
                q.push(value);
                ++times;
                if (times == k) break;
            }
        }
        cout << winner;
    } else {
        long long value = q.front();
        q.pop();
        winner = max(winner, value);
        cout << winner;
    }
    return (0);
}
