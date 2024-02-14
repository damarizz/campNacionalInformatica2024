/*
* author: DEL CARPIO MARTINEZ, Damaris
*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i, n) for(int i=0;i<n;i++)
#define fora(a, b, c) for(int i=a;i<b;i+=c)
#define yesi cout<<"YES"<<'\n'
#define nosi cout<<"NO"<<'\n'

int main() {
    fastio;

    int n, k, cookies_i;
    priority_queue<int, vector<int>, greater<int>> cookies;

    cin >> n >> k;

    fori(i, n) {
        cin >> cookies_i;
        cookies.push(cookies_i);
    }

    int count = 0;

    while (cookies.top() < k) {
        if (cookies.size() < 2) {
            cout << "-1";
            return 0;
        }

        int least = cookies.top();
        cookies.pop();
        int second_least = cookies.top();
        cookies.pop();

        cookies.push(1*least + 2*second_least);
        count++;
    }

    cout << count;
    return 0;
}
