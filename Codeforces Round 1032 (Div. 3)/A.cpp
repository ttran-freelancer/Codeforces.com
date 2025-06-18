// https://codeforces.com/contest/2121/problem/A
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> A(n);
    for (auto& a : A) {
        cin >> a;
    }

    cout << A[n - 1] - A[0] + min(abs(A[0] - s), abs(A[n - 1] - s)) << "\n";
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