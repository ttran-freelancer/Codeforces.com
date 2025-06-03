// https://codeforces.com/contest/2114/problem/D
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;
using pii = pair<int, int>;

void solve() {
    int n;
    cin >> n;
    
    vector<pii> A(n);
    map<int, int> cols;
    map<int, int> rows;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        A[i] = {x, y};
        rows[x]++;
        cols[y]++;
    }

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    auto findMN = [&](const map<int, int>& mp) -> int {
        auto it = mp.begin();
        while (it->second == 0) {
            it++;
        }
        return it->first;
    };

    auto findMX = [&](const map<int, int>& mp) {
        auto rit = mp.rbegin();
        while (rit->second == 0) {
            rit++;
        }
        return rit->first;
    };

    auto calc = [&](int x, int y) -> long long {
        rows[x]--;
        cols[y]--;

        int mnr = findMN(rows);
        int mxr = findMX(rows);
        int mnc = findMN(cols);
        int mxc = findMX(cols);

        long long result = (long long)(mxr - mnr + 1)*(mxc - mnc + 1);
        if (result < n) {
            result += min(mxr - mnr + 1, mxc - mnc + 1);
        }

        rows[x]++;
        cols[y]++;

        return result;
    };

    long long ans = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        long long cur = calc(A[i].first, A[i].second);
        ans = min(ans, cur);
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