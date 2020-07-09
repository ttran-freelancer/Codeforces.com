// https://codeforces.com/problemset/problem/1374/C
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("C.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int len;
        cin >> len;

        char c;
        int open_bracket = 0;
        int res = 0;
        for (int i = 0; i < len; ++i) {
            cin >> c;
            if (c == ')') {
                if (open_bracket > 0) {
                    --open_bracket;
                }
                else {
                    ++res;
                }
            }
            else {
                ++open_bracket;
            }
        }

        cout << res << endl;
    }

    return 0;
}