#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;

    cin >> a >> b >> c;

    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b >= a && b <= c) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}