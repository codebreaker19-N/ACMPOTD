#include <bits/stdc++.h>
using namespace std;

int main(){
    string time;
    cin >> time;

    int a;
    cin >> a;

    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));

    int total = h * 60 + m + a;

    total %= 1440;

    h = total / 60;
    m = total % 60;

    cout << setfill('0') << setw(2) << h << ":";
    cout << setfill('0') << setw(2) << m;

    return 0;
}