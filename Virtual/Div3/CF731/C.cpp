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
        int k, n, m;
        cin >> k >> n >> m;
        deque<int> a, b;
        vector<int> res;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            b.push_back(x);
        }

        bool flag = 1;
        while (!a.empty() || !b.empty()) {
            if (!a.empty() && a.front() == 0) {
                res.push_back(0);
                a.pop_front();
                k++;
            } else if (!b.empty() && b.front() == 0) {
                res.push_back(0);
                b.pop_front();
                k++;
            } else {
                if (!a.empty() && a.front() <= k) {
                    res.push_back(a.front());
                    a.pop_front();
                } else if (!b.empty() && b.front() <= k) {
                    res.push_back(b.front());
                    b.pop_front();
                } else {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag) {
            for (int i : res) cout << i << " ";
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}