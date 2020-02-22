// http://codeforces.com/contest/1296/problem/A
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int t, n;
    int odds, evens, val;

    cin >> t;

    while (t--) {
        cin >> n;
        odds = evens = 0;

        for (int i = 0; i < n; ++i) {
            cin >> val;
            val % 2 == 0 ? ++evens : ++odds;
        }

        if (odds == 0) {
            cout << "NO" << endl;
            continue;
        }

        if (odds == n && n % 2 == 0) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}