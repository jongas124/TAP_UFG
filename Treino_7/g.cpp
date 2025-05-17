#include <bits/stdc++.h>
using namespace std;

long long verify (string s, bitset<20> b);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    long long sm, m, nc = INT_MAX, n1s;
    m = (1<<n.size())-1;
    sm = m;
    while (sm != 0) {
        bitset<20> bs(sm);
        if (verify(n, bs)%3 == 0) {
            
            n1s = (long long)(n.size() - bs.count());
            nc = min(nc, n1s);
        }
        sm--;
    }
    if (nc == INT_MAX) {
        nc = -1;
    }
    cout << nc << '\n';

    return 0;
}

long long verify (string s, bitset<20> b) {
    long long m = 1, n = s.size();
    long long num = 0;
    for (int i = (n-1); i >= 0; i--) {
        if (b[(n - 1) - i]) {
            num += (s[i] - '0') * m;
            m *= 10;
        }
    }
    return num;
}