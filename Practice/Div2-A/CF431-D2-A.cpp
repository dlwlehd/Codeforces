#include <bits/stdc++.h>
using namespace std;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

int main() {
    input();
    vector<int> a(4);
    for (int i = 0; i < 4; i++) cin >> a[i];
    string s;
    cin >> s;
    int res = 0;
    for (char i : s) {
        res += a[i - '0' - 1];
    }
    cout << res;
}