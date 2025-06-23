// https://codeforces.com/contest/2112/problem/C
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

    int mx = A[n - 1];
    long long ans = 0LL;
    for (int k = n - 1; k >= 0; k--) {
        if (3*A[k] - mx <= 0) break;
        for (int j = k - 1; j >= 0; j--) {
            if (min(2*A[j] - A[k], 2*A[j] + A[k] - mx) <= 0) break;

            int val = max(A[k] - A[j], mx - A[j] - A[k]);
            int i = upper_bound(A.begin(), A.begin() + j, val) - A.begin();
            ans += j - i;
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