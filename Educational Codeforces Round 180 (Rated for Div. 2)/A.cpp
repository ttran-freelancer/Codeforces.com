// https://codeforces.com/contest/2112/problem/A
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int a, x, y;
    cin >> a >> x >> y;

    if (x > y) {
        swap(x, y);
    }

    if (a >= x && a <= y) {
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