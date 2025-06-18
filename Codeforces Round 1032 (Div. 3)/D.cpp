// https://codeforces.com/contest/2121/problem/D
#include <bits/stdc++.h>
// #include <bits/debug.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for (auto& a :  A) {
        cin >> a;
    }
    for (auto& b :  B) {
        cin >> b;
    }

    int k = 0;
    vector<pair<int, int>> ans;

    auto op1 = [&](int i) {
        k++;
        swap(A[i], A[i + 1]);
        ans.push_back({1, i + 1});
    };
    auto op2 = [&](int i) {
        k++;
        swap(B[i], B[i + 1]);
        ans.push_back({2, i + 1});
    };
    auto op3 = [&](int i) {
        k++;
        swap(A[i], B[i]);
        ans.push_back({3, i + 1});
    };

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 1) continue;
        for (int j = i + 1; j < n; j++) {
            if (A[j] % 2 == 1) {
                int k = j;
                while (k >= i + 1) {
                    op1(k - 1);
                    k--;
                }
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (B[i] % 2 == 0) continue;
        for (int j = i + 1; j < n; j++) {
            if (B[j] % 2 == 0) {
                int k = j;
                while (k >= i + 1) {
                    op2(k - 1);
                    k--;
                }
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0 && B[i] % 2 == 1) {
            op3(i);
        } 
    }

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= i + 1; j--) {
            if (A[j] < A[j - 1]) {
                op1(j - 1);
            }
            if (B[j] < B[j - 1]) {
                op2(j - 1);
            }
        }
    }

    cout << k << "\n";
    for (auto p : ans) {
        cout << p.first << " " << p.second << "\n";
    }

    // debug(A);
    // debug(B);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}