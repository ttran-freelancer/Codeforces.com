// http://codeforces.com/problemset/problem/1521/A
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("A.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        long long a, b;
        cin >> a >> b;

        if (b != 1) {
            cout << "YES" << endl;
            cout << a << " " << a*b << " " << a*(b + 1) << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}