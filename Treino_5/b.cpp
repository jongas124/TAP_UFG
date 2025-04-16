#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n;
    set<int> seta;
    for (int i = 0; i < n; i++) {
        cin >> t;
        seta.insert(t);
    }
    cout << seta.size() << '\n';
    return 0;
}