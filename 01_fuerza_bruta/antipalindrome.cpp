#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) {
            string x = s;
            reverse(x.begin(), x.end());
            if (x == s) {
                cout << s.size() - 1;
            } else {
                cout << s.size();
            }
            return 0;
        }
    }

    cout << "0";
    return 0;
}
