// https://codeforces.com/problemset/problem/1362/A
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        long double a, b;
        cin >> a >> b;

        long long exp;
        exp = (long long)(log2(b/a));

        if ((a*pow(2, exp)) == b) {
            exp = abs(exp);
            cout << (exp / 3) + ((exp % 3) / 2) + (((exp % 3) % 2) / 1) << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}