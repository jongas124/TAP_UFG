#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int *persons = (int*) calloc(3, sizeof(int)), mem1, mem2, zeros = 0, posi;

    scanf("%d %d", &mem1, &mem2);
    persons[mem1 - 1] = 1;
    persons[mem2 - 1] = 1;

    for(int i = 0; i < 3; i++) {
        if (persons[i] == 0) {
            zeros++;
            posi = i;
        }
    }

    if (zeros == 1) {
        printf("%d\n", posi + 1);

    } else {
        printf("-1\n");
    }

    return 0;
}