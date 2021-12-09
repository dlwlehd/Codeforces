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
        vector<int> a(n), res;
        for (int &i : a) cin >> i;
        res.push_back(0);
        vector<int> b(n, 0);
        vector<int> s(n, 0);
        b[0] = 0;
        s[0] = a[0];

        for (int i = 1; i < n; i++) {
            for (int bit = 1; bit < (1 << 30); bit <<= 1) {
                int flag = 0;
                if ((s[i - 1] & bit) && ((a[i] & bit) == 0)) {
                    flag = 1;
                }
                if (flag) b[i] |= bit;
            }
            s[i] = a[i] ^ b[i];
        }

        for (auto i : b) cout << i << " ";
        cout << "\n";
    }
}