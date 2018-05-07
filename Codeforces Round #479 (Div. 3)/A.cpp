// http://codeforces.com/contest/977/problem/A
#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("A.in", "r", stdin);

    int n, k;

    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        }
        else {
            --n;
        }
    }

    cout << n << endl;

    return 0;
}