#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, pl, s = 0, diff;
    scanf("%d %d %d", &n, &m, &k);
    vector<int> nv(n), mv(m);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &nv[i]);
    }
    sort(nv.begin(), nv.end());
    for (int i = 0; i < m; i++) {
        scanf(" %d", &mv[i]);
    }
    sort(mv.begin(), mv.end());
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (abs(nv[i] - mv[j]) <= k) {
            s++;
            i++;
            j++;
        } else if (nv[i] < (mv[j] - k)) {
            i++;
        } else {
            j++;
        }
    }
    printf("%d\n", s);
    return 0;
}