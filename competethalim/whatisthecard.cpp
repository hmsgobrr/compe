#include <bits/stdc++.h>
using namespace std;
int t, d[55], n, y;
char ds[55][2] = {};
int main() {
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        memset(d, 0, sizeof d);
        memset(ds, 0, sizeof ds);
        for (int i = 0; i < 52; i++) {
            cin >> ds[i][0] >> ds[i][1];
            if (isdigit(ds[i][0])) d[i] = ds[i][0] - '0';
            else d[i] = 10;
        }
        n = 25;
        y = 0;
        for (int i = 3; i--;) {
            y += d[n];
            n += 11 - d[n];
        }
        int ai = (52 - y) >= n ? (52-y) : (52-y-(n-25));
        cout << "Case " << cas << ": " << ds[ai][0] << ds[ai][1] << endl;
    }
}

