#include <bits/stdc++.h>
using namespace std;
int T, l, r, ans, zeros[20];
int main() {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        cin >> l >> r;
        memset(zeros, 0, sizeof(zeros));
        for (int i = l; i <= r; i++) {
            for (int j = 0; j < 20; j++) {
                if (!(i & (1 << j))) zeros[j]++;
            }
        }

        int ans = INT_MAX;
        for (int i = 0; i < 20; i++) {
            ans = min(ans, zeros[i]);
        }
        cout << zeros[0] << endl;
    }
}

