// https://codeforces.com/contest/2114/problem/A
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int a = stoi(s);
    int b = sqrt(a);

    if (b*b == a) {
        cout << 0 << " " << b << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}