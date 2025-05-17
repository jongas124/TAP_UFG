#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, min_diff = INT_MAX, sm, m, sd = 0, sf = 0, nums[21], diff;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    m = (1<<n) - 1;
    sm = m;
    while (sm != 0) {
        bitset<20> bs(sm);
        for (int i = 0; i < n; i++) {
            if(bs[i]) {
                sd += nums[i];
            } else {
                sf += nums[i];
            }
        }
        diff = abs(sd - sf);
        min_diff = min(diff, min_diff);
        sf = 0;
        sd = 0;
        sm = (sm - 1) & m;
    }

    cout << min_diff << '\n';

    return 0;
}