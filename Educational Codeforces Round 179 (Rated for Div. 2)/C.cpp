// https://codeforces.com/contest/2111/problem/C
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto& a : A) {
        cin >> a;
    }

    long long ans = LLONG_MAX;
    for (int i = 0, j = 0; j < n; j) {
        while (j < n && A[i] == A[j]) {
            j++;
        }

        ans = min(ans, (long long)A[i]*(i + n - j));
        i = j;
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