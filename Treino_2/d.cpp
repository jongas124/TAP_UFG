#include <bits/stdc++.h>
using namespace std;

bool distance(int *a, int *b, int tam);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int i_counter = 0, n, d, dists[11][11];
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            scanf("%d", &dists[i][j]);
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(distance(dists[i], dists[j], d)) {
                i_counter++;
            }
        }
    }
    printf("%d\n", i_counter);
    
    return 0;
}

bool distance(int *a, int *b, int tam) {
    double d = 0;
    for(int i = 0; i < tam; i++) {
        d += pow((a[i] - b[i]), 2);
    }
    d = sqrt(d);
    return std::fmod(d, 1) == 0;
}