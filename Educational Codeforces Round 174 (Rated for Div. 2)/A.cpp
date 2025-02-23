#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        vector<int> B(n-2);
        for (auto& b : B) {
            cin >> b;
        }

        bool ans = true;
        for (int i = 1; i < n - 3; i++) {
            if (B[i-1] == 1 && B[i] == 0 && B[i+1] == 1) {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}