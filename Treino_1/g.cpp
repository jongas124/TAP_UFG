#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n_sq, n_mex_sq, tmp;
    char *seq;
    seq = (char*) calloc(300001, sizeof(char));
    scanf("%d %d", &n_sq, &n_mex_sq);
    for (int i = 0; i < n_sq; i++) {
        scanf("%d", &tmp);
        if (tmp < 300001) {
            seq[tmp] = 1;
        }
        
    }
    for (int i = 0; i < n_mex_sq; i++) {
        if (!seq[i]) {
            printf("%d\n", i);
            goto a;
        }
    }
    printf("%d\n", n_mex_sq);
    a:
    return 0;
}