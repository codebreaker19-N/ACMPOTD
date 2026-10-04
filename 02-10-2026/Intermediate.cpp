#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    int smallestOdd = 1e9;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            sum += x;
        } else {
            sum += x;
            oddCount++;
            smallestOdd = min(smallestOdd, x);
        }
    }

    if (oddCount % 2 != 0)
        sum -= smallestOdd;

    cout << sum;

    return 0;
}