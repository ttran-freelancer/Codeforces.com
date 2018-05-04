// http://codeforces.com/contest/975/problem/B
#include<iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[14];

long long sol(int index) {
    int b[14];
    int quanity = arr[index];
    long long res = 0;
    for (int i = 0; i < 14; ++i) {
        b[i] = arr[i];
    }
    b[index] = 0;
    for (int i = 1; i <= 14; ++i) {
        if (quanity - i + 1 > 0) {
            b[(index + i) % 14] += ceil(1.0*(quanity - i + 1) / 14);
        }
        res += (b[(index + i) % 14] % 2 == 0 ? b[(index + i) % 14] : 0);
    }
    return res;
}

int main() {
    // freopen("B.in", "r", stdin);
    long long res = 0;
    for (int i = 0; i < 14; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < 14; ++i) {
        res = max(res, sol(i));
    }
    cout << res << endl;
    return 0;
}