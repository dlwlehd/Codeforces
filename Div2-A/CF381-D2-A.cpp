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
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int x = 0, y = 0;
    int rptr = 0, lptr = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[rptr] > a[lptr]) {
                x += a[rptr];
                rptr++;
            }
            else {
                x += a[lptr];
                lptr--;
            }
        }
        else {
            if (a[rptr] > a[lptr]) {
                y += a[rptr];
                rptr++;
            }
            else {
                y += a[lptr];
                lptr--;
            }
        }
    }
    cout << x << " " << y;
}