// http://codeforces.com/contest/977/problem/D
#include<iostream>
#include <deque>
#include <queue>

using namespace std;

deque<long long> dq;
queue<long long> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("D.in", "r", stdin);

    int n, cnt = 0;
    long long val;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> val;
        q.push(val);
    }

    while (!q.empty()) {
        val = q.front();
        q.pop();
        if (dq.empty()) {
            dq.push_back(val);
        }
        else {
            if (val*2 == dq.front() || (val % 3 == 0 && val/3 == dq.front())) {
                dq.push_front(val);
            }
            else if (dq.back()*2 == val || (dq.back() % 3 == 0 && dq.back() / 3 == val)){
                dq.push_back(val);
            }
            else {
                q.push(val);
            }
        }
    }
    for (deque<long long>::iterator it = dq.begin(); it != dq.end(); ++it) {
        cout << *it;
        if (++cnt == n) {
            cout << endl;
        }
        else {
            cout << " ";
        }
    }
    return 0;
}