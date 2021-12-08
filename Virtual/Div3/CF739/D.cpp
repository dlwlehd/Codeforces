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
    vector<ll> a;
    ll idx = 1;
    for (int i = 1; i <= 60; i++) {
        a.push_back(idx);
        idx *= 2;
    }

    while (t--) {
        string n;
        cin >> n;
        int res = 1e9 + 7;

        for (int i = 0; i < 60; i++) {
            string x = to_string(a[i]);
            int idx = 0, mxIdx = x.size(), del = 0, add = 0;
            for (int j = 0; j < n.size(); j++) {
                if (idx == mxIdx) {
                    del += n.size() - j;
                    break;
                }

                if (n[j] == x[idx]) {
                    idx++;
                } else {
                    del++;
                }
            }
            add = mxIdx - idx;
            res = min(res, del + add);
            // cout << x << " " << del << " " << add << "\n";
        }
        cout << res << "\n";
    }
}