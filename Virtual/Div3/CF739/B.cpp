#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

void input() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    input();
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b) swap(a, b);
        int n = a - b;
        if (c > 2 * n || a > 2 * n) {
            cout << "-1\n";
            continue;
        }

        if (c > n) {
            cout << c - n << "\n";
        } else {
            cout << c + n << "\n";
        }
    }
}