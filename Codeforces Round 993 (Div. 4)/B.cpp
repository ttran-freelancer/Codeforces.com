#include <bits/stdc++.h>

using namespace std;

void test_case() {
    static map<char, char> mp = {{'p', 'q'}, {'w', 'w'}, {'q', 'p'}};
    string a, b;
    cin >> a;
    for (int i = a.size() - 1; i >= 0; i--) {
        b += mp[a[i]];
    }
    cout << b << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("B.in","r", stdin);

    int k;
    cin >> k;

    while (k--) {
        test_case();
    }

    return 0;
}