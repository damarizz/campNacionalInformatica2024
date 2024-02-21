/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
using namespace std;

int count_primes(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int result = count_primes(n);
    cout << result;
    return 0;
}
