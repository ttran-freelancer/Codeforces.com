// https://codeforces.com/problemset/problem/1364/A
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int num, x;
        cin >> num >> x;

        int first = -1, second = -1, sum = 0, val;
        for (int i = 0; i < num; ++i) {
            cin >> val;
            
            sum += val;
            if (first == -1 && val % x != 0) {
                first = i;
            }
            if (val % x != 0) {
                second = i;
            }
        }

        if (sum % x != 0) {
            cout << num << endl;
        }
        else if (first == -1 && second == -1) {
            cout << -1 << endl;
        }
        else if (first < num - second - 1) {
            cout << num - first - 1 << endl;
        }
        else {
            cout << second << endl;
        }
    }

    return 0;
}