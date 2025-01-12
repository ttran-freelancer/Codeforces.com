// https://codeforces.com/contest/2057/problem/A
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;
        cout << max(n, m) + 1 << endl;
    }

    return 0;
}