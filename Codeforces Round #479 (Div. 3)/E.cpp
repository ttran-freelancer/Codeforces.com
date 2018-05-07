// http://codeforces.com/contest/977/problem/E
#include<iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<vector<int> > vvi;

int visited[200005];

void sol(int index) {
    if (!visited[index]) {
        visited[index] = true;
        for (int i = 0; i < vvi[index].size(); ++i) {
            sol(vvi[index][i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("E.in", "r", stdin);

    memset(visited, false, sizeof(visited));

    int n, m, u, v, res = 0;

    cin >> n >> m;

    vvi.resize(n, vector<int>());

    while (m--) {
        cin >> u >> v;
        vvi[u - 1].push_back(v - 1);
        vvi[v - 1].push_back(u - 1);
    }

    for (int i = 0; i < n; ++i) {
        if (vvi[i].size() != 2) {
            sol(i);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            sol(i);
            ++res;
        }
    }
    
    cout << res << endl;
    return 0;
}