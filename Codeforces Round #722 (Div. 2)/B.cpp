// http://codeforces.com/problemset/problem/1529/B
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("B.in", "r", stdin);

    int testcase, arr[100005];
    cin >> testcase;

    while (testcase--) {
        int n;
        int diff_min = INT_MAX;
        int result = 1;

        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        for (int i = 0; i < n - 1; ++i) {
            int diff = abs(arr[i] - arr[i+1]);
            
            if (diff_min > diff)
                diff_min = diff;

            if (arr[i + 1] <= diff_min)
                ++result;
            else
                break;
        }

        cout << result << endl;
    }

    return 0;
}