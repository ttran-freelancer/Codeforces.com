// http://codeforces.com/contest/980/problem/A
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    string s;
    int cnt = 0, cnt2 = 0;

    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == 'o') {
            ++cnt;
        }
        else {
            ++cnt2;
        }
    }
    if (cnt == 0 || cnt2 % cnt == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}