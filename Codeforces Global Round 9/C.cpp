// https://codeforces.com/problemset/problem/1375/C
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("C.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int num;
        cin >> num;

        int val, begin, end;
        for (int i = 0; i < num; ++i) {
            cin >> val;
            if (i == 0) {
                begin = val;
            }
            else if (i == num - 1) {
                end = val;
            }
        }

        if (begin < end) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}