// https://codeforces.com/contest/2114/problem/E
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> A(n + 1);
    vector<vector<int>> E(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        E[u].push_back(v);
        E[v].push_back(u);
    }

    queue<int> q{{1}};
    vector<bool> visited(n + 1, false);
    vector<long long> MN(n + 1);
    vector<long long> MX(n + 1);

    MN[1] = A[1];
    MX[1] = A[1];

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (visited[u]) continue;
        visited[u] = true;
        for (auto v : E[u]) {
            if (visited[v]) continue;
            MN[v] = A[v] - MX[u];
            MX[v] = max((long long)A[v], A[v] - MN[u]);
            q.push(v);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << (i != 0 ? " " : "") << MX[i];
    }
    cout << "\n";
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