#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x[101], min_stan = INT_MAX, stan = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &x[i]);
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = 0; j < n; j++) {
            stan += pow(x[j] - i, 2);
        }
        if (stan < min_stan) {
            min_stan = stan;
        }
        stan = 0;
    }
    printf("%d\n", min_stan);
    
    return 0;    
}