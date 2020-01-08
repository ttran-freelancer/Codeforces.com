// http://codeforces.com/contest/1283/problem/B

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    int t;

    cin >> t;

    while (t--) {
        int n, k;

        cin >> n >> k;
        cout << (n / k)*k + min(n - (n / k)*k, k / 2) << endl;
    }

    return 0;
}