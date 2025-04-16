#include <bits/stdc++.h>
using namespace std;

int busca_binaria (vector<vector<int>> &v, int x, int tam);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, t;
    cin >> n >> a;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> t;
        v[i].push_back(t);
        v[i].push_back(i);
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1, soma;
    while (i < j) {
        soma = v[i].at(0) + v[j].at(0);
        if (soma == a) {
            if (v[i].at(1) > v[j].at(1)) {
                cout << (v[j].at(1)+1) << ' ' << (v[i].at(1)+1) << '\n';
            } else {
                cout << (v[i].at(1)+1) << ' ' << (v[j].at(1)+1) << '\n';
            }
            goto a;
        } else if (soma < a) {
            i++;
        } else {
            j--;
        }
    }
    cout << "IMPOSSIBLE\n";
    a:
    return 0;
}