#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, max1 = -1, max2 = -1, v[200001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if(v[i] > max1) {
            max2 = max1;
            max1 = v[i];
        } else if (v[i] > max2) {
            max2 = v[i];
        }

    }
    for (int i = 0; i < n; i++) {
        if (v[i] == max1) {
            printf("%d\n", max2);
        } else {
            printf("%d\n", max1);
        }
    }
    return 0;
}