#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    vector<bool> visited(n, false);
    int components = 0;

    for (int i = 0; i < n; i++){
        if (visited[i])
            continue;

        components++;

        queue<int> q;
        q.push(i);
        visited[i] = true;

        while (!q.empty()){
            int u = q.front();
            q.pop();

            for (int v = 0; v < n; v++){
                if (!visited[v] &&
                    (a[u].first == a[v].first ||
                     a[u].second == a[v].second)) {

                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    cout << components - 1;

    return 0;
}