/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define for_i(i, n) for(int i = 0; i < n; i++)
#define for_a(a, b, c) for(int i = a; i < b; i += c)

int chess_board[14][14];
int queens;
int count_ways;

void reset_board(int n) {
    for_i(i, n) {
        for_i(j, n) {
            chess_board[i][j] = 0;
        }
    }
}

bool is_valid_place(int row, int col, int n) {
    int i, j;

    for (i = col; i >= 0; i--) {
        if (chess_board[row][i] == 1)
            return false;
    }

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (chess_board[i][j] == 1)
            return false;
    }

    for (i = row, j = col; i < n && j >= 0; i++, j--) {
        if (chess_board[i][j] == 1)
            return false;
    }

    return true;
}

void solve_nqueen(int col_queen, int n) {
    if (col_queen == n) {
        count_ways++;
        return;
    }

    int i, j;
    for_i(i, n) {
        if (is_valid_place(i, col_queen, n)) {
            chess_board[i][col_queen] = 1;
            solve_nqueen(col_queen + 1, n);
            chess_board[i][col_queen] = 0;
        }
    }
}

int main() {
    fastio;
    cin >> queens;
    count_ways = 0;
    reset_board(queens);
    solve_nqueen(0, queens);
    cout << count_ways << endl;
    return 0;
}
