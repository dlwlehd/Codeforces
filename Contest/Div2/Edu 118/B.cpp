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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i: a) cin >> i;
        sort(all(a));
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (cnt == n / 2) break;
            for (int j = i + 1; j < n; j++) {
                if (cnt == n / 2) break;
                if (a[j] % a[i] < a[0]) {
                    cnt++;
                    cout << a[j] << " " << a[i] << "\n";
                }
            }
        }
    }
}