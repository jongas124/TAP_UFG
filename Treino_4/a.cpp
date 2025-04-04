#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, v1, v2;
    scanf("%d %d", &n, &m);
    int *cities = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf(" %d %d", &v1, &v2);
        cities[v1 - 1]++;
        cities[v2 - 1]++;
    }  
    for (int i = 0; i < n; i++) {
        printf("%d\n", cities[i]);
    }
    return 0;
}