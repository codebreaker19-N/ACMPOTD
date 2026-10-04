#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][j] != a[i][0]) {
                cout << "NO";
                return 0;
            }
        }

        if (i > 0 && a[i][0] == a[i - 1][0]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}