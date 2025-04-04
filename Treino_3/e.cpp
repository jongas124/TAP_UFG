#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a[21][21], b[21], c, n, m, counter = 0, s = 0;
    scanf("%d %d %d", &n, &m, &c);
    for(int i = 0; i < m; i++) {
        scanf(" %d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %d", &a[i][j]);
            s += a[i][j] * b[j];
        }
        if ((s + c) > 0) {
            counter++;
        }
        s = 0;
    }
    printf("%d\n", counter);
    return 0;    
}