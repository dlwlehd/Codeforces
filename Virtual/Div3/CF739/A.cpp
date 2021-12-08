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
    vector<int> a;
    for (int i = 1; i <= 2000; i++) {
        if (i % 10 == 3 || i % 3 == 0) continue;
        a.push_back(i);
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << a[n - 1] << "\n";
    }
}