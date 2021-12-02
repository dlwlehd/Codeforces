#include <bits/stdc++.h>
using namespace std;

int n;

void input() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("C:\\Users\\CKIRUser\\Documents\\GitHub\\Codeforces\\Div2-A\\input.txt","r",stdin);
}

int main() {
    input();
    string x;
    cin >> x;
    int u = 0, l = 0;
    for (char i : x) {
        if (isupper(i)) u++;
        else l++;
    }
    if (u <= l) {
        for (int i = 0; i < x.size(); i++) {
            if(isupper(x[i])) x[i] = tolower(x[i]);
        }
    }
    else {
        for (int i = 0; i < x.size(); i++) {
            if(islower(x[i])) x[i] = toupper(x[i]);
        }
    }
    cout << x;
}
