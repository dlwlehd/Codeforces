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
    freopen("/root/projects/PS/input.txt", "r", stdin);
    freopen("/root/projects/PS/output.txt", "w", stdout);
}

int main() {
    input();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        ll sum = 0;
        for (auto &i : a) {
            cin >> i;
            cnt[i] += 1;
            sum += i;
        }
        if ((2 * sum) % n != 0) {
            cout << "0\n";
            continue;
        }
        ll x = (2 * sum) / n;
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            int a1 = a[i];
            int a2 = x - a1;
            if (cnt.count(a2)) ans += cnt[a2];
            if (a1 == a2) ans--;
        }
        cout << ans / 2 << "\n";
    }
}