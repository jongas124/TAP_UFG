#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, t, p2;
    cin >> n >> q;
    vector<int> a(n);
    int low;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < q; i++) {
        cin >> t;
        low = lower_bound(a.begin(), a.end(), t) - a.begin();
        cout << (n - low) << '\n';
    }
    return 0;
}