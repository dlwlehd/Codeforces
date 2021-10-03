#include <bits/stdc++.h>
using namespace std;

int n, h;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

int main() {
    input();
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int res = 0;
    for (int i : a) {
        if (i > h) res += 2;
        else res += 1;
    }
    cout << res;
}
