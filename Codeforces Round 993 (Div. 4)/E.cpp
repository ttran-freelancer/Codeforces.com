#include <iostream>
#include <cmath>

using namespace std;

int lower_bs(int l1, int r1, int l2, int r2, long long x) {
    int l = l1, r = r1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (mid * x >= l2 && ((mid - 1)*x < l2 || mid == l1)) {
            return mid * x <= r2 ? mid : -1;
        } else if (mid * x >= l2) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return -1;
}

int upper_bs(int l1, int r1, int l2, int r2, long long x) {
    int l = l1, r = r1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (mid * x <= r2 && ((mid + 1)*x > r2 || mid == r1)) {
            return mid * x >= l2 ? mid : -1;
        } else if (mid * x <= r2) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return -1;
}


void test_case() {
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    int mn = l2 > r1 ? logl(l2 / r1)/logl(k) : 0;
    int mx = r2 > l1 ? logl(r2 / l1)/logl(k) : 0;
    int ans = 0;
    for (int i = mn; i <= mx; i++) {
        int up = upper_bs(l1, r1, l2, r2, pow(k, i));
        int lo = lower_bs(l1, r1, l2, r2, pow(k, i));
        if (up != -1 && lo != -1) {
            ans += up - lo + 1;
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("E.in","r", stdin);

    int k;
    cin >> k;

    while (k--) {
        test_case();
    }

    return 0;
}