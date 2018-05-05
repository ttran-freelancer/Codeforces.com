// http://codeforces.com/contest/975/problem/C
#include<iostream>

using namespace std;

long long arr[200005];
long long k[200005];
long long cnt = 0;
int index = 1;
int n;

int bs(int left, int right) {
    int mid = (left + right)/2;
    if (left > right) {
        if (right == n) {
            cnt = 0;
            index = 1;
            return n;
        }
        else {
            index = right + 1;
            return n - right;
        }
    }
    if (arr[mid] == cnt) {
        if (mid == n) {
            index = 1;
            cnt = 0;
            return n;
        }
        index = mid + 1;
        return n - mid;
    }
    else if (arr[mid] < cnt) {
        return bs(mid + 1, right);
    }
    else {
        return bs(left, mid - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("C.in", "r", stdin);

    int q, a;
    
    cin >> n >> q;
    arr[0] = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> a;
        arr[i] = arr[i - 1] + a;
    }
    for (int i = 0; i < q; ++i) {
        cin >> k[i];
    }
    for (int i = 0; i < q; ++i) {
        cnt += k[i];
        cout << bs(index, n) << endl;
    }
    return 0;
}