// http://codeforces.com/problemset/problem/1536/B
#include <iostream>
#include <vector>

using namespace std;

void next(string& str) {
    bool inc = false;

    for (int i = str.length() - 1; i >= 0; --i) {
        if (str[i] != 'z') {
            str[i] += 1;
            
            for (int j = i + 1; j < str.length(); ++j) {
                str[j] = 'a';
            }

            inc = true;
            break;
        }
    }

    if (!inc)
        str = string(str.length() + 1, 'a');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int n;
        string str;

        cin >> n;
        cin >> str;

        string result = "a";

        while (str.find(result) != string::npos) {
            next(result);
        }

        cout << result << endl;
    }

    return 0;
}