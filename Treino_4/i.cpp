#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, prox, actual, sum = 0, max_sum = 0, *vs = (int*) calloc(100001, sizeof(int));
    scanf("%d %d", &n, &actual);
    for (int i = 0; i < (n - 1); i++) {
        scanf(" %d", &prox);
        if(prox <= actual) {
            vs[i] = 1;
        }
        actual = prox;
    }
    for (int i = 0; i < n; i++) {
        if(vs[i]) {
            sum++;
            if (max_sum < sum) {
                max_sum = sum;
            }
        } else {
            sum = 0;
        }
    }
    printf("%d\n", max_sum);
    return 0;
}