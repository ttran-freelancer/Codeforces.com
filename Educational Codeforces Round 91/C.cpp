// https://codeforces.com/problemset/problem/1380/C
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("C.in", "r", stdin);

    int testcase;
    cin >> testcase;

    int arr[100005];
    int res[100005];

    while (testcase--) {
        int num, restriction;
        cin >> num >> restriction;

        for (int i = 0; i < num; ++i) {
            cin >> arr[i];
        }

        sort(arr, arr + num);
        memset(res, -1, sizeof(res));

        int max = 0;
        for (int i = num - 1; i >= 0; --i) {
            int cur = 0, idx = i, step;
            while (idx < num) {
                if (idx == i) {
                    step = (int)ceil((float)restriction / arr[idx]);
                }
                else if (res[idx] != -1) {
                    cur += res[idx];
                    break;
                }
                else {
                    break;
                }

                if (idx + step <= num) {
                    ++cur;
                }
                
                idx += step;
            }
            res[i] = cur;

            if (max < cur) {
                max = cur;
            }
        }

        cout << max << endl;
    }

    return 0;
}