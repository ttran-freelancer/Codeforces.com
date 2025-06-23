// https://codeforces.com/contest/2112/problem/B
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int>A(n);
    for (auto& a : A) {
        cin >> a;
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int mn, mx;

        int left = INT_MAX;
        mn = INT_MAX;
        mx = INT_MIN;
        for (int j = i - 1; j >= 0; j--) {
            mn = min(mn, A[j]);
            mx = max(mx, A[j]);
            if ((mn <= A[i] - 1 && A[i] - 1 <= mx) || (A[i] - 1 <= mn && mn <= A[i] + 1)) {
                left = i - j - 1;
                break;
            }
        }

        int right = INT_MAX;
        mn = INT_MAX;
        mx = INT_MIN;
        for (int j = i + 1; j < n; j++) {
            mn = min(mn, A[j]);
            mx = max(mx, A[j]);
            if ((mn <= A[i] - 1 && A[i] - 1 <= mx) || (A[i] - 1 <= mn && mn <= A[i] + 1)) {
                right = j - i - 1;
                break;
            }
        }

        ans = min({ans, left, right});
    }

    cout << (ans != INT_MAX ? ans : -1) << "\n";
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