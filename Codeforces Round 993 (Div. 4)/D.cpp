#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int>& B) {
    int sz = B.size();
    for (int i = 0; i < sz; i++) {
        cout << B[i] << (i != sz - 1 ? " " : "\n");
    }
}

void test_case() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    unordered_map<int, int> mp;
    int k = 0;

    for (auto& a : A) {
        cin >> a;
        if (mp.find(a) == mp.end()) {
            B[k++] = a;
        }
        mp[a] = true;
    }

    int x = 1;
    for (int i = k; i < n; i++) {
        while (mp.find(x) != mp.end()) {
            x++; 
        }
        B[i] = x;
        mp[x] = true;
    }

    print_vector(B);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("D.in","r", stdin);

    int k;
    cin >> k;

    while (k--) {
        test_case();
    }

    return 0;
}