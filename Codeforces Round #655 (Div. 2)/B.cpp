// https://codeforces.com/contest/1372/problem/B
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int num;
        cin >> num;
        
        int min_prime_factor = -1;
        for (int i = 2; i <= (int)sqrt(num); ++i) {
            if (num % i == 0) {
                min_prime_factor = i;
                break;
            }
        }

        if (min_prime_factor == -1) {
            cout << 1 << " " << num - 1 << endl;
        }
        else {
            cout << num/min_prime_factor << " " << num - num/min_prime_factor << endl;
        }
    }

    return 0;
}