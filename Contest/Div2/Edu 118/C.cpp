#include <bits/stdc++.h>

using namespace std;
#define all(v) (v).begin(), (v).end()
#define sz(v) (v).size()
#define X first
#define Y second
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pll;

const int mod = 1e9 + 7;

void input() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    input();
    int t;
    cin >> t;
    while (t--) {
        ll n, h;
        cin >> n >> h;
        vector<int> a(n);
        for (int &i: a) cin >> i;
        ll lo = 0, hi = 1e18;
        while (lo + 1 < hi) {
            ll mid = (lo + hi) / 2;
            ll cnt = 0;
            for (int i = 0; i < n - 1; i++) {
                if (cnt >= h) break;
                if (a[i + 1] - a[i] < mid) cnt += a[i + 1] - a[i];
                else cnt += mid;
            }
            if (cnt < h) cnt += mid;

            if (cnt >= h) hi = mid;
            else lo = mid;
        }
        cout << hi << "\n";
    }
}
