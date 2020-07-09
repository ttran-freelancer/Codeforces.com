// https://codeforces.com/problemset/problem/1373/A
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << (a >= c ? -1 : 1) << " " << (a*b <= c ? -1 : b) << endl;
    }

    return 0;
}