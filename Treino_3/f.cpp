#include <bits/stdc++.h>
using namespace std;

int findMax(int *v, int tam);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, *cards = (int*)calloc(101, sizeof(int)), *alice = (int*)calloc(101, sizeof(int)), *bob = (int*)calloc(101, sizeof(int));
    int as = 0, bs = 0, v = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &cards[i]);
    }
    for (int i = 0; i < n; i++) {
        if (v == 0) {
            as += cards[findMax(cards, n)];
            cards[findMax(cards, n)] = 0;
            v = 1;
            continue;
        }
        if (v == 1) {
            bs += cards[findMax(cards, n)];
            cards[findMax(cards, n)] = 0;
            v = 0;
        }
    }

    printf("%d\n", as-bs);

    return 0;    
}

int findMax(int *v, int tam) {
    int max = -1, p;
    for(int i = 0; i < tam; i++) {
        if (v[i] > max) {
            max = v[i];
            p = i;
        }
    }
    return p;
} 