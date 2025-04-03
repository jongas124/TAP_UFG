#include <bits/stdc++.h>
using namespace std;


int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, actual;
    long sum = 0, min_sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &actual);
        sum += (long)actual;
        if (sum < min_sum) {
            min_sum = sum;
        }
    }
    printf("%ld\n", sum + (-min_sum));

    return 0;
}