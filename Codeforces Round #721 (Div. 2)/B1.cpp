// http://codeforces.com/problemset/problem/1527/B1
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("B1.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int n, count = 0;
        string str;

        cin >> n;
        cin >> str;

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '0') 
                ++count;
        }

        if (count % 2 == 1 && count != 1)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    } 

    return 0;
}