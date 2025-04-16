#include <bits/stdc++.h>
using namespace std;

int busca_binaria (vector<vector<int>> &v, int x, int tam);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, t;
    vector<int> ps(3);
    cin >> n >> a;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> t;
        v[i].push_back(t);
        v[i].push_back(i);
    }
    sort(v.begin(), v.end());
    int j, k, soma;
    for (int i = 0; i < (n-2); i++) {
        j = i + 1;
        k = n - 1;
        while (j < k) {
            soma = v[i].at(0) + v[j].at(0) + v[k].at(0);
            if (soma == a) {
                ps[0] = v[i].at(1) + 1;
                ps[1] = v[j].at(1) + 1;
                ps[2] = v[k].at(1) + 1;
                sort(ps.begin(), ps.end());
                cout << ps[0] << ' ' << ps[1] << ' ' << ps[2] << '\n';
                goto a;
            } else if (soma < a) {
                j++;
            } else {
                k--;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    a:
    return 0;
}