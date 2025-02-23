#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> A(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
            }
        }

        map<int, int> mp;
        vector<vector<int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        bool has2 = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mp[A[i][j]] == 2) continue;

                mp[A[i][j]] = 1;
                for (int k = 0; k < 4; k++) {
                    int x = i + d[k][0];
                    int y = j + d[k][1];

                    if (x < 0 || x >= n || y < 0 || y >= m) continue;

                    if (A[i][j] == A[x][y]) {
                        mp[A[i][j]] = 2;
                        has2 = true;
                        // debug(i, j, mp[A[i][j]]);
                        break;
                    }
                }
            }
        }

        int ans = 0;
        for (auto m : mp) {
            // debug(m);
            ans += m.second;
        }

        ans -= has2 ? 2 : 1;
        cout << ans << endl;
    }

    return 0;
}