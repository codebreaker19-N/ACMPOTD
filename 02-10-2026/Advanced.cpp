#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    vector<int> ans;

    for (int i = 0; i < n; i++){
        if (a[i] * n == sum)
            ans.push_back(i + 1);
    }

    cout << ans.size() << "\n";

    for (int x : ans)
        cout << x << " ";

    return 0;
}