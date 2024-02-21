/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0)

vector<long long> prime_factors(long long N) {
    vector<long long> factors;
    while (N % 2 == 0) {
        factors.push_back(2);
        N /= 2;
    }

    for (long long p = 3; p * p <= N; p += 2) {
        while (N % p == 0) {
            factors.push_back(p);
            N /= p;
        }
    }

    if (N > 2) {
        factors.push_back(N);
    }

    return factors;
}

int main() {
    fastio;
    long long n;
    cin >> n;

    vector<long long> factors = prime_factors(n);
    for (long long factor : factors) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
