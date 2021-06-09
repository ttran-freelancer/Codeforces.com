// http://codeforces.com/problemset/problem/1520/D
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("D.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int n, val, arr[400005];
        long long result = 0;

        cin >> n;
        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < n; ++i) {
            cin >> val;
            ++arr[val - i + (int)2e5];
        }

        for (int i = 0; i < n + (int)2e5; ++i) {
            if (arr[i] > 0)
                result += ((long long)arr[i]*(arr[i] - 1))/2;
        }

        cout << result << endl;
    }

    return 0;
}