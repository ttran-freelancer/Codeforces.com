// https://codeforces.com/problemset/problem/1380/B
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        string str;
        cin >> str;

        int rs = 0, ss = 0, ps = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == 'R') {
                ++rs;
            }
            else if (str[i] == 'S') {
                ++ss;
            }
            else {
                ++ps;
            }
        }

        if (rs > ss) {
            if (rs > ps) {
                cout << string(str.length(), 'P') << endl;
            }
            else {
                cout << string(str.length(), 'S') << endl;
            }
        } else {
            if (ss > ps) {
                cout << string(str.length(), 'R') << endl;
            }
            else {
                cout << string(str.length(), 'S') << endl;
            }
        }
    }

    return 0;
}