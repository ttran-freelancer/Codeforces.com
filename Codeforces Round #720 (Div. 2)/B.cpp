// http://codeforces.com/problemset/problem/1521/B
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int n, arr[100005];
        int min = INT_MAX, min_idx = -1, k = 0;
        
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            if (arr[i] < min) {
                min = arr[i];
                min_idx = i;
            }
        }
         
        for (int i = 1; i <= n; ++i) {
            if (arr[i] != min + i - 1)
                ++k;
        }

        cout << k << endl;

        if (arr[1] != min) 
            cout << 1 << " " << min_idx << " " << min << " " << min << endl;

        for (int i = 2; i <= n; ++i) {
            if (arr[i] != min + i - 1)
                cout << 1 << " " << i << " " << min << " " << min + i -1 << endl;
        }
    }

    return 0;
}