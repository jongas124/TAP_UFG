#include <bits/stdc++.h>
using namespace std;

int finder(int *n_list, int num, int tam);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n, n_list[101], posi, i, j;
    scanf("%d %d", &x, &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &n_list[i]);
    }

    if(finder(n_list, x, n)) {
        printf("%d\n", x);
        goto a;
    }

    i = x - 1;
    j = x + 1;

    while(1) {
        if (finder(n_list, i, n)) {
            printf("%d\n", i);
            goto a;
        }
        if (finder(n_list, j, n)) {
            printf("%d\n", j);
            goto a;
        }
        i--;
        j++;
    }
    a:
    return 0;
}

int finder(int *n_list, int num, int tam) {
    for (int i = 0; i < tam; i ++) {
        if (n_list[i] == num) {
            return 0;
        }
    }
    return 1;
}