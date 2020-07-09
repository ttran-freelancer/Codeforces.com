// https://codeforces.com/problemset/problem/1375/B
#include <iostream>

using namespace std;

bool isInvalid(int **arr, const int& r, const int& c, const int& rows, const int& cols) {
    // All cells
    if (arr[r][c] < 0 || arr[r][c] > 4) {
        return true;
    }

    // Corner
    if (((r == 0 || r == rows - 1) && (c == 0 || c == cols - 1)) && arr[r][c] > 2) {
        return true;
    }

    // Edge
    if ((r == 0 || r == rows - 1 || c == 0 || c == cols - 1) && arr[r][c] > 3) {
        return true;
    }

    return false;
}

int fillValid(int **arr, const int& r, const int& c, const int& rows, const int& cols) {
    // Corner
    if ((r == 0 || r == rows - 1) && (c == 0 || c == cols - 1)) {
        return 2;
    }

    // Edge
    if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
        return 3;
    }

    return 4;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("B.in", "r", stdin);

    int testcase;
    cin >> testcase;

    int **arr = new int*[302];

    for (int r = 0; r < 302; ++r) {
        arr[r] = new int[302];
    }
    
    while (testcase--) {
        int rows, cols;
        cin >> rows >> cols;

        bool impossible = false;
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                cin >> arr[r][c];

                if (isInvalid(arr, r, c, rows, cols)) {
                    impossible = true;
                }
            }
        }

        if (impossible) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                arr[r][c] = fillValid(arr, r, c, rows, cols);
                cout << arr[r][c] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}