#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int v = 0, counter = 0, position = 0, max_a = -1, cut, n, *pizza = (int*) calloc(360, sizeof(int));
    scanf("%d", &n);
    pizza[359] = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &cut);
        position += cut;
        if (position > 360) {
            position -= 360;
        }
        pizza[position - 1] = 1;
    }

    if (n == 359) {
        max_a = 1;
        goto a;
    }

    for (int i = 0; i < 360; i++) {
        counter++;
        if (pizza[i] == 1 || i == 359 || i == 0) {
            if (v == 1) {
                if (max_a < counter) {
                    max_a = counter;
                }
                counter = 0;
                v = 0;
            }
            v = 1;
        }
    }

    if (max_a == 360) {
        max_a--;
    }
    a:
    printf("%d \n", max_a);
    return 0;
}