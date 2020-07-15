// https://codeforces.com/problemset/problem/1372/C
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

        int begin = -1, end = -1, wrong = 0, val;
        for (int i = 1; i <= num; ++i) {
            cin >> val;
            if (val != i) {
                if (begin == -1) {
                    begin = i;
                }
                end = i;
                ++wrong;
            }
        }

        if (begin == -1) {
            cout << 0 << endl;
        }
        else if (end - begin + 1 > wrong) {
            cout << 2 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }

    return 0;
}