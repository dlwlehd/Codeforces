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
        int n;
        cin >> n;

        int x = sqrt(n);
        if (x * x != n) x++;

        int move = x * x - n + 1;
        if (move <= x) {
            cout << x << " " << move << "\n";
        } else {
            move -= x;
            cout << x - move << " " << x << "\n";
        }
    }
}