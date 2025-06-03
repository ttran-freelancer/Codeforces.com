// https://codeforces.com/contest/2114/problem/C
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

    int ans = 1;
    for (int i = 0, j = 0; j < n; j++) {
        if (A[i] + 1 < A[j]) {
            ans++;
            i = j;
        }
    }

    cout << ans<< endl;
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