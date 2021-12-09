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
        string s, res = "", cmp = "";
        cin >> s;
        int n = sz(s);
        for (int i = 0; i < n; i++) {
            res += char('a' + i);
        }

        while (!s.empty()) {
            int x = sz(s);
            if (x == 1) {
                cmp += s[0];
                s.erase(0, 1);
            } else {
                if (s[0] > s[x - 1]) {
                    cmp += s[0];
                    s.erase(0, 1);
                } else {
                    cmp += s[x - 1];
                    s.erase(x - 1, 1);
                }
            }
        }
        reverse(all(cmp));
        bool flag = 1;
        for (int i = 0; i < n; i++) {
            if (res[i] != cmp[i]) {
                flag = 0;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
}