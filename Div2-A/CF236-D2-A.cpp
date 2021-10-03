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
    string x;
    cin >> x;
    set<char> s;
    for (char i : x) s.insert(i);
    (s.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}
