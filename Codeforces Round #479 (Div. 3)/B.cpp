// http://codeforces.com/contest/977/problem/B
#include<iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    string str, res;
    int len, max = 0;

    cin >> len;
    cin >> str;

    for (int i = 0; i < str.length() - 1; ++i) {
        if (mp.find(str.substr(i, 2)) != mp.end()) {
            ++mp[str.substr(i, 2)];
        }
        else {
            mp[str.substr(i, 2)] = 1;
        }
    }


    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        if (it->second > max) {
            max = it->second;
            res = it->first;
        }
    }
    cout << res << endl;
    return 0;
}