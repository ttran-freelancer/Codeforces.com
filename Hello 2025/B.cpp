// https://codeforces.com/contest/2057/problem/B
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    // freopen("B.in", "r", stdin);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;
        
        vector<int>A(n);
        map<int, int> mp;

        for (int i = 0; i < A.size(); i++) {
            cin >> A[i];
            mp[A[i]]++;
        }

        if (k == 0) {
            cout << mp.size() << endl;
        } else {
            priority_queue<int> pq;
            for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
                if (k > 0) {
                    k -= it->second;
                    pq.push(it->second);
                } else if (it->second < pq.top()) {
                    k += pq.top();
                    pq.pop();
                    k -= it->second;
                    pq.push(it->second);
                }
            }

            int remain = mp.size() - pq.size() + (k < 0 ? 1 : 0);
            cout << (remain > 1 ? remain : 1) << endl;
        }
    }

    return 0;
}