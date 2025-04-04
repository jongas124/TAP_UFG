#include <bits/stdc++.h>
using namespace std;

int findMin(double *v, int tam);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, n1, n2;
    double *pot = (double*)calloc(51, sizeof(double)), novo;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &pot[i]);
    }
    for (int i = 0; i < n-1; i++) {
        n1 = findMin(pot, n);
        novo = pot[n1];
        pot[n1] = 1003;
        n2 = findMin(pot, n);
        novo += pot[n2];
        pot[n2] = novo/2;
    }
    printf("%lf\n", novo/2);
    return 0;
}


int findMin(double *v, int tam) {
    double min = 1002.0, p;
    for(int i = 0; i < tam; i++) {
        if (v[i] < min) {
            min = v[i];
            p = i;
        }
    }
    return p;
} 