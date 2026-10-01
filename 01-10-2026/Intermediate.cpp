#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long ans = n * (n + 1) / 2;

        long long p = 1;

        while (p <= n) {
            ans -= 2 * p;
            p *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}