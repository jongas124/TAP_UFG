#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int ids, n_gates, gates[100001][2], min = 100001, max = -1, r;
    scanf("%d %d", &ids, &n_gates);
    for(int i = 0; i < n_gates; i++) {
        scanf("%d %d", &gates[i][0], &gates[i][1]);
        if (max < gates[i][0]) {
            max = gates[i][0];
        }
        if (min > gates[i][1]) {
            min = gates[i][1];
        }
    }
    r = min - max + 1;

    if(r < 0) {
        r = 0;
    }
    
    printf("%d\n", r); 
    return 0;
}