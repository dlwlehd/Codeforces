#include <bits/stdc++.h>
using namespace std;
 
void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
}
 
int main() {
    input();
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) res++;
    }
    cout << res;
}