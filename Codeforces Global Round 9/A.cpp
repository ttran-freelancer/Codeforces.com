// https://codeforces.com/contest/1375/problem/A
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
        int num;
        cin >> num;

        int val;
        for (int i = 0; i < num; ++i) {
            cin >> val;
            val = (i % 2 == 0) ? abs(val) : -abs(val);
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}