// https://codeforces.com/problemset/problem/1373/C
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("C.in", "r", stdin);

    int testcase;
    cin >> testcase;

    int cache[1000006];
    while (testcase--) {
        string str;
        cin >> str;

        int sum = 0;
        int max_neg = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '+') {
                ++sum;
            }
            else {
                --sum;
                if (sum < -max_neg) {
                    max_neg = -sum;
                    cache[max_neg] = i + 1;
                }
            }
        }

        long long res = 0;
        for (int i = 0; i < max_neg; ++i) {
            res += cache[i + 1];
        }
        res += str.length();

        cout << res << endl;
    }

    return 0;
}