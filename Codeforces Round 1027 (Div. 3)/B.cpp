// https://codeforces.com/contest/2114/problem/B
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            a++;
        } else {
            b++;
        }
    }

    if (min(a, b) < n/2-k || (a - n/2 + k) % 2 == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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