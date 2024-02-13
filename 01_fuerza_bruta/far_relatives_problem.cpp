#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<char, pair<int, int>>> friends;

    for (int i = 0; i < n; ++i) {
        char gender;
        int a_i, b_i;
        cin >> gender >> a_i >> b_i;
        friends.push_back({gender, {a_i, b_i}});
    }

    int maxFriends = 0;

    for (int day = 1; day <= 366; ++day) {
        int mCount = 0;
        int fCount = 0;

        for (const auto& friendInfo : friends) {
            char gender = friendInfo.first;
            int a_i = friendInfo.second.first;
            int b_i = friendInfo.second.second;

            if (a_i <= day && day <= b_i) {
                if (gender == 'M') {
                    mCount++;
                } else {
                    fCount++;
                }
            }
        }

        maxFriends = max(maxFriends, 2 * min(mCount, fCount));
    }

    cout << maxFriends << endl;

    return 0;
}
