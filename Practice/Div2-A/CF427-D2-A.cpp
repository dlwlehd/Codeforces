#include <bits/stdc++.h>
using namespace std;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

int main() {
    input();
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    int res = 0;
    int cnt = 0;
    for (int i : a) {
        if (i == -1) {
            if (cnt == 0) res++;
            else cnt--;
        }
        else cnt += i;
    }
    cout << res;
}