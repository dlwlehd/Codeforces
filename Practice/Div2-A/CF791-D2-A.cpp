#include <bits/stdc++.h>
using namespace std;

int a, b, cnt = 0;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

int main() {
    input();
    cin >> a >> b;
    while (a <= b) {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;
}
