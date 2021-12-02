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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    input();
    int t;
    cin >> t;
    while (t--) {
        int n, l;
        cin >> n >> l;
        vector<int> a(n);
        for (int &i: a) cin >> i;
        sort(all(a));
        double ans;
        ans = max(a[0], l - a[n - 1]);
        for (int i = 1; i < n; i++) {
            ans = max(ans, (double) (a[i] - a[i - 1]) / 2);
        }
        cout << fixed << setprecision(10) << ans;
    }
}
