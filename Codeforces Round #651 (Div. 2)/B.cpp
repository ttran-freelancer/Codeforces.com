// https://codeforces.com/problemset/problem/1370/B
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    int odd[2003];
    int even[2003];
    
    while (testcase--) {
        int num;
        cin >> num;

        int odds = 0, evens = 0, val;
        for (int i = 1; i <= 2*num; ++i) {
            cin >> val;
            if (val % 2 != 0) {
                odd[odds++] = i;
            }
            else {
                even[evens++] = i;
            }
        }

        if (odds % 2 == 0 && odds > 0) {
            odds -= 2;
        }
        else if (odds > 0) {
            --odds;
            --evens;
        }
        else {
            evens -= 2;
        }

        for (int i = 0; i < odds; i += 2) {
            cout << odd[i] << " " << odd[i + 1] << endl;
        }
        for (int i = 0; i < evens; i += 2) {
            cout << even[i] << " " << even[i + 1] << endl;
        }
    }

    return 0;
}