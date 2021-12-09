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
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (x1 == x2 && x2 == x3 &&
            ((y3 >= y1 && y3 <= y2) || (y3 >= y2 && y3 <= y1)))
            cout << abs(x1 - x2) + abs(y1 - y2) + 2 << "\n";
        else if (y1 == y2 && y2 == y3 &&
                 ((x3 >= x1 && x3 <= x2) || (x3 >= x2 && x3 <= x1)))
            cout << abs(x1 - x2) + abs(y1 - y2) + 2 << "\n";
        else
            cout << abs(x1 - x2) + abs(y1 - y2) << "\n";    
    }
}