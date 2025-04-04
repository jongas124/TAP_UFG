#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, q, v[200002], x1, x2, sums[200003], sum = 0;
    scanf("%lli %lli", &n, &q);
    sums[0] = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lli", &v[i]);
        sum += v[i];
        sums[i + 1] = sum;
    }
    for (int i = 0; i < q; i++) {
        scanf("%lli %lli", &x1, &x2);
        printf("%lli\n", sums[x2] - sums[x1 - 1]);
    }
    return 0;
}