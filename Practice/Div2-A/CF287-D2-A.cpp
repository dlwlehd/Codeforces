#include <bits/stdc++.h>
using namespace std;

int board[4][4];

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

bool check() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char color = board[i][j];
            bool flag = true;
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    if (board[i + k][j + l] != color) flag = false;
                }
            }
            if (flag) return true;
        }
    }
    return false;
}

int main() {
    input();
    vector<pair<int,int>> black, white;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char x;
            cin >> x;
            if (x == '.') {
                board[i][j] = 0;
                white.push_back({i, j});
            }
            else {
                board[i][j] = 1;
                black.push_back({i, j});
            }
        }
    }

    for (int i = 0; i < white.size(); i++) {
        int a = white[i].first;
        int b = white[i].second;
        board[a][b] = 1;
        if (check()) {
            cout << "YES";
            return 0;
        }
        board[a][b] = 0;
    }

    for (int i = 0; i < black.size(); i++) {
        int a = black[i].first;
        int b = black[i].second;
        board[a][b] = 0;
        if (check()) {
            cout << "YES";
            return 0;
        }
        board[a][b] = 1;
    }

    cout << "NO";
}
