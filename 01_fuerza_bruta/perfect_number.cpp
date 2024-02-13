#include <iostream>
using namespace std;

int sumDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int k, a = 0;
    cin>>k;

    for (int i = 19; i<11000000; i += 9) {
        if (sumDigits(i) == 10) {
            a++;
            if (a == k) {
                cout << i;
                return 0;
            }
        }
    }

    return 0;
}
