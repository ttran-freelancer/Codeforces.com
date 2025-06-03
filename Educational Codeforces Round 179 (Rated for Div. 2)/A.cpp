// https://codeforces.com/contest/2111/problem/A
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int x;
    cin >> x;

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(0);
    pq.push(0);

    int ans = 0;
    int e = 0;
    do {
        int n = pq.top();
        pq.pop();
        if (e == x) break;
        pq.push(min(2*n + 1, x));
        e = n;
        ans++;
    } while (true);
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