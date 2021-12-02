#include <bits/stdc++.h>
using namespace std;

int n;
int a = 0, d = 0;
string s;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\CLionProjects\\untitled\\input.txt","r",stdin);
}

int main() {
    input();
    cin >> n >> s;
    for (char i : s) {
        if (i == 'A') a++;
        else d++;
    }
    if (a > d) cout << "Anton";
    else if (a < d) cout << "Danik";
    else cout << "Friendship";
}
