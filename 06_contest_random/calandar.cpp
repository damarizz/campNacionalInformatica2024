/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int y1, m1, d1, y2, m2, d2;
    char s[10];
    cin >> y1 >> m1 >> y1 >> s;
    cin >> y2 >> m2 >> y2;

    int n = (y2 - y1) % 5;
    int k;

    if (s[0] == 'M') k = 0;
    else if (s[0] == 'T' && s[1] == 'u') k = 1;
    else if (s[0] == 'W') k = 2;
    else if (s[0] == 'T' && s[1] == 'h') k = 3;
    else if (s[0] == 'F') k = 4;

    if (n <= 0) k = (k + n + 5) % 5;
    else k = (k + n) % 5;

    if (k == 0) printf("Monday\n");
    else if (k == 1) printf("Tuesday\n");
    else if (k == 2) printf("Wednesday\n");
    else if (k == 3) printf("Thursday\n");
    else if (k == 4) printf("Friday\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
