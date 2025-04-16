#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, max_tam = 0, ini = 0, fim;
    vector<bool> checker(pow(10, 9) + 1);
    cin >> n;
    vector<int> nv(n);
    for (int i = 0; i < n; i++) {
        cin >> nv[i];
    }
    for (fim = 0; fim < n; fim++) {
        while (checker.at(nv[fim])) {
            checker[nv[ini]] = false;
            ini++;
        }
        checker[nv[fim]] = true;
        max_tam = max(max_tam, fim - ini + 1);
    }
    cout << max_tam << '\n';
    return 0;
}
