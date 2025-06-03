// https://codeforces.com/contest/2111/problem/B
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> F(n + 1);
    F[1] = 1;
    F[2] = 2;
    for (int i = 3; i <= n; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }

    string ans;
    for (int i = 0; i < m; i++) {
        int w, l, h;
        cin >> w >> l >> h;
        if (w >= F[n] && l >= F[n] && h >= F[n]) {
            if (w >= F[n] + F[n-1] || l >= F[n] + F[n - 1] || h >= F[n] + F[n - 1]) {
                ans += '1';
            } else {
                ans += '0';
            }
        } else {
            ans += '0';
        }
    }
    cout << ans << "\n";
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