#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

int main() {
    input();
    int a, b;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(a - 2) + abs(b - 2);
}
