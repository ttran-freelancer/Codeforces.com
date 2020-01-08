// http://codeforces.com/contest/1283/problem/A

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int t;
    
    cin >> t;

    while (t--) {
        int h, m;
        
        cin >> h >> m;
        cout << 24*60 - 60*h - m << endl;
    }

    return 0;
}