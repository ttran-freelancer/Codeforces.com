// https://codeforces.com/problemset/problem/1369/B
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    char arr[100005];
    char res[100005];
    while (testcase--) {
        int num;
        cin >> num;
        
        for (int i = 0; i < num; ++i) {
            cin >> arr[i];
        }

        int num_res = 0;
        for (int i = num - 1; i >= 0; --i) {
            if (arr[i] == '1') {
                if (num_res == 0 || res[num_res - 1] == '1') {
                    res[num_res++] = '1';
                }
                else {
                    while (num_res != 0 && res[num_res - 1] == '0') {
                        --num_res;
                    }
                    res[num_res++] = '0';
                }
            }
            else {
                res[num_res++] = '0';
            }
        }        

        for (int i = num_res - 1; i >= 0; --i) {
            cout << res[i];
        }
        cout << endl;
    }

    return 0;
}