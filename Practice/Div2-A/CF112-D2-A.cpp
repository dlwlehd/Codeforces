#include <bits/stdc++.h>
using namespace std;

int n;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

int main() {
    input();
    vector<string> v;
    for (int i = 0; i < 2; i++) {
        string x;
        cin >> x;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] >= 'a') x[i] = toupper(x[i]);
        }
        v.push_back(x);
    }
    if (v[0] > v[1]) cout << 1;
    else if (v[0] < v[1]) cout << -1;
    else cout << 0;
}
