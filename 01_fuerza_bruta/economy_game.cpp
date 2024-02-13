#include <iostream>
#define fori(i, n) for (long i = 0; i < n; i++)
#define h 1234567
#define ca 123456
#define com 1234
using namespace std;

int main() {
    long n; // kolya's coins
    cin >> n;

    fori(i, n / h + 1) {
       fori(j, n / ca + 1) {
        long remaining = n - (h * i) - (ca * j);
        if (remaining % com == 0 && remaining >= 0) {
            cout << "YES";
            return 0;
        }
       }
    }

    cout << "NO";

    return 0;
}

