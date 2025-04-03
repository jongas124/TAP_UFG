#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, num[101], min = 1000000001, pmin, i;
    char c[101][12];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d", c[i], &num[i]);
        if(min > num[i]) {
            min = num[i];
            pmin = i;
        }
    }

    for (i = pmin; i < n; i++) {
        printf("%s \n", c[i]);
    }

    for (i = 0; i < pmin; i++) {
        printf("%s \n", c[i]);
    }

    return 0;
}