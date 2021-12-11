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
        int n, a, b;
        vector<int> res;
        cin >> n >> a >> b;
        for (int i = 1; i <= n; i++) res.push_back(i);

        int x = a + b;
        if (x > n - 2 || abs(a - b) > 1) {
            cout << -1 << "\n";
            continue;
        }

        bool flag = 0;
        if (a > b) {
            swap(res[n - 1], res[n - 2]);
            a--;
        }
        if (a < b) {
            swap(res[0], res[1]);
            b--;
            flag = 1;
        }

        int idx = flag ? 2 : 1;
        for (int i = 0; i < a; i++) {
            swap(res[idx], res[idx + 1]);
            idx += 2;
        }

        for (int i : res) cout << i << " ";
        cout << "\n";
    }
}