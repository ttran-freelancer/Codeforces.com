#include <bits/stdc++.h>

using namespace std;

void test_case() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int ans = 0;
    ans += min(m, a) + min(m, b);
    if (a < m) {
        ans += min(m - a, c);
        c -= m - a;
    }
    if (b < m && c > 0) {
        ans += min(m - b, c);
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("C.in","r", stdin);

    int k;
    cin >> k;

    while (k--) {
        test_case();
    }

    return 0;
}