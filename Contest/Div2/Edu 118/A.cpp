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
        int x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        string a = to_string(x1);
        string b = to_string(x2);
        int x = a.size() + p1;
        int y = b.size() + p2;
        if (x > y) cout << ">\n";
        else if (x < y) cout << "<\n";
        else {
            if (a.size() > b.size()) {
                string temp = b;
                while (temp.size() != a.size()) temp += "0";
                if (a > temp) cout << ">\n";
                else if (a == temp) cout << "=\n";
                else cout << "<\n";
            } else {
                string temp = a;
                while (temp.size() != b.size()) temp += "0";
                if (b > temp) cout << "<\n";
                else if (b == temp) cout << "=\n";
                else cout << ">\n";
            }
        }
    }
}