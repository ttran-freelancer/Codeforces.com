// http://codeforces.com/problemset/problem/1523/B
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int n, arr[1003];
        
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }

        cout << 3*n << endl;
        for (int i = 1; i <= n; i += 2) {
            // (2, 1, 1, 2, 1, 1), (1, 2, 1, 2, 1, 2)
            cout << 2 << " " << i << " " << i + 1 << endl;
            cout << 1 << " " << i << " " << i + 1 << endl;
            cout << 1 << " " << i << " " << i + 1 << endl;
            cout << 2 << " " << i << " " << i + 1 << endl;
            cout << 1 << " " << i << " " << i + 1 << endl;
            cout << 1 << " " << i << " " << i + 1 << endl;
        }
    }

    return 0;
}