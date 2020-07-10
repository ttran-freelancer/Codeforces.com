// https://codeforces.com/problemset/problem/1367/C
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("C.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int num, distance;
        cin >> num >> distance;

        string str;
        cin >> str;

        int pos = -1, res = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '1') {
                if (pos == -1) {
                    res += i/(distance +1);
                }
                else {
                    res +=  (i - pos - 1 - distance)/(distance + 1);
                }
                pos = i;
            }
        }
        
        if (pos == -1) {
            res += 1;
            res += (str.length() - 1)/(distance + 1);
        }
        else {
            res += (str.length() - pos - 1)/(distance + 1);
        }

        cout << res << endl;
    }

    return 0;
}