#include <bits/stdc++.h>
using namespace std;
int T, l, r, bits[18][200005], zeros[18], maxi;
int main() {
    memset(bits, 0, sizeof(bits));

    for (int i = 0; i < 18; i++) {
        for (int j = 1; j <= 200000; j++) {
            bits[i][j] = bits[i][j-1] + ((j & (1 << i)) != 0 ? 1 : 0);
//            cout << bits[i][j];
//            break;
        }
    }

    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        cin >> l >> r;
        memset(zeros, 0, sizeof(zeros));

        for (int i = 0; i < 18; i++) {
            zeros[i] = bits[i][r] - bits[i][l-1];
        }

        maxi = INT_MAX;
        for (int i = 0; i < 18; i++) {
            maxi = min(maxi, (r-l+1)-zeros[i]);
        }
        cout << maxi << endl;
    }
}

