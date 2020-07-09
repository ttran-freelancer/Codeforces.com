// https://codeforces.com/problemset/problem/1366/A
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int sticks, diamonds;
        cin >> sticks >> diamonds;

        if (sticks > 2*diamonds) {
            cout << diamonds << endl;
        }
        else if (diamonds > 2*sticks) {
            cout << sticks << endl;
        }
        else {
            cout << (sticks + diamonds)/3 << endl;
        }
    }

    return 0;
}