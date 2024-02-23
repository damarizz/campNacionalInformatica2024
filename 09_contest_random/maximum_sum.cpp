/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0)
#define fori(i, n) for(int i = 0; i < n; ++i)
using namespace std;

int maxSum(vector<int>& arr) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int maxSubrectangleSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int result = INT_MIN;

    for (int left = 0; left < n; ++left) {
        vector<int> temp(n, 0);

        for (int right = left; right < n; ++right) {
            for (int i = 0; i < n; ++i) {
                temp[i] += matrix[i][right];
            }

            int currentSum = maxSum(temp);
            result = max(result, currentSum);
        }
    }

    return result;
}

int main() {
    fastio;
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int answer = maxSubrectangleSum(matrix);

    cout<<answer;

    return 0;
}
