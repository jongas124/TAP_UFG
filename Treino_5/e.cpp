#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, g = 0;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int i = 0, j = n- 1, soma;
    while (i < j) {
        soma = p[i] + p[j];
        if (soma == x) {
            g++;
            i++;
            j--;
            n -= 2;
        } else if (soma < x) {
            g++;
            i++;
            j--;
            n -= 2;
        } else {
            j--;
        }
    } 
    g += n;
    cout << g << '\n';
    return 0;
}