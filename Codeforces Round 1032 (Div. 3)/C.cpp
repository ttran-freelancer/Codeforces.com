// https://codeforces.com/contest/2121/problem/C
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    vector<pair<int, int>> vmx;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
            if (mx <= A[i][j]) {
                if (mx < A[i][j]) {
                    mx = A[i][j];
                    vmx.clear();
                }
                vmx.push_back({i, j});
            }
        }
    }

    map<int, int> rows;
    map<int, int> cols;

    for (auto p : vmx) {
        rows[p.first]++;
        cols[p.second]++;
    }

    for (auto r : rows) {
        for (auto c : cols) {
            if (r.second + c.second - (A[r.first][c.first] == mx ? 1 : 0) == vmx.size()) {
                cout << mx - 1 << "\n";
                return;
            } 
        }
    }
    cout << mx << "\n";
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