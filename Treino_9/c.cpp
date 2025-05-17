#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, equal_sp = 0, equal = 0;
    vector<int> crv1(1000, 0), crv2(1000, 0);
    cin >> n;
    vector<int> vet1(n), vet2(n);

    for (int i = 0; i < n; i++) {
        cin >> vet1[i];
        crv1[vet1[i]%1000]++;
    }

    for (int i = 0; i < n; i++) {
        cin >> vet2[i];
        crv2[vet2[i]%1000]++;
    }

    for (int i = 0; i < 1000; i++) {
        if(crv1[i] && crv2[i]) {
            equal += min(crv1[i], crv2[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if(vet1[i] == vet2[i]) {
            equal_sp++;
        }
    }

    cout << equal_sp << '\n' << (equal - equal_sp) << '\n';

    return 0;
}