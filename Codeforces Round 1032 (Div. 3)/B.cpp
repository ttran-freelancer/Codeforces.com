// https://codeforces.com/contest/2121/problem/B
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> A(26, 0);
    if (s[0] != s[n - 1]) {
        A[s[0] - 'a']++;
        A[s[n - 1] - 'a']++;
    } else {
        A[s[0] - 'a']++;
    }
    

    for (int i = 1; i < n - 1; i++) {
        if (++A[s[i] - 'a'] == 2) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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