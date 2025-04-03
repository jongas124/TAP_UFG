#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long n, time, cities[5], gargalo = LONG_MAX;
    scanf("%ld", &n);
    for (int i = 0; i < 5; i++) {
        scanf("%ld", &cities[i]);
        if (cities[i] < gargalo) {
            gargalo = cities[i];
        } 
    }
    time = (n/gargalo) + 5;
    if (n%gargalo == 0) {
        time--;
    }
    printf("%ld\n", time);
    return 0;
}