#include <bits/stdc++.h>
using namespace std;

long long calc(vector<long long> &v, long long t, long long max);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long tmt, n, t;
    cin >> n >> t;
    vector<long long> ma(n);
    for (int i = 0; i < n; i++) {
        cin >> ma[i];
    }
    sort(ma.begin(), ma.end());
    long long ini = 1, fim = ma[n-1] * t;
    while (ini < fim) {
        long long meio = ini + (fim - ini) / 2;
        if (calc(ma, meio, t) >= t) {
            fim = meio;
        } else {
            ini = meio + 1;
        }
    }
    cout << ini << '\n';

    return 0;
}
long long calc(vector<long long> &v, long long t, long long max) {
    long long sp = 0;
    for (int i = 0; i < v.size(); i++) {
        sp += t/v.at(i);
        if (sp >= max) {
            break;
        }
    }
    return sp;
}