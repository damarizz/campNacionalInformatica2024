/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0)
#define fori(i,n) for(long long i = 2; i * i <= n; i++)

#define yesi cout << "YES" << '\n'
#define nosi cout << "NO" << '\n'

bool is_prime(long long n) {
    if (n < 2) {
        return false;
    }
    fori(i, n) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    fastio;
    long long n;
    cin >> n;
    if (is_prime(n)) {
        yesi;
    } else {
        nosi;
    }
    return 0;
}
