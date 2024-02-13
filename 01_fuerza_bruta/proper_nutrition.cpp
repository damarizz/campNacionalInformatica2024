#include <iostream>
#define fori(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int n; // burles
    int a, b; // precio de cola y bar
    int x, y; // # de cola y bar

    cin >> n;
    cin >> a;
    cin >> b;

    fori(i, n / a + 1) {
        int c=n-a*i;
        if (c%b == 0) {
            x=i;
            y=c/b;
            cout << "YES" << endl;
            cout << x << " " << y << endl;
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
