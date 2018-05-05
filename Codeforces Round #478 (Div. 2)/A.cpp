// http://codeforces.com/contest/975/problem/A
#include<iostream>
#include <set>
#include <string>

using namespace std;

set<int> st;

void sol(string str) {
    int res = 0;
    for (int i = 0; i < str.length(); ++i) {
        res |= 1 << (str[i] - 'a');
    }
    st.insert(res);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);
    int n;
    string str;
    cin >> n;
    while (n--) {
        cin >> str;
        sol(str);
    }
    cout << st.size() << endl;
    return 0;
}