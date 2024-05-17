#include <bits/stdc++.h>
using namespace std;
int T, N, Q, QL, QK, tans, l, r, mid, ans, a[200005], ba[30][200005];
int main() {
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> N;
        for (int i = 0; i < 30; i++) ba[i][0] = 0;
        for (int i = 1; i <= N; i++) {
            cin >> a[i];
            for (int j = 0; j < 30; j++) {
                ba[j][i] = ba[j][i-1] + ((a[i] & (1 << j)) != 0 ? 1 : 0);
                // cout << ba[j][i] << " ";
            }
            // cout << endl;
        }

        cin >> Q;
        for (int qi = 0; qi < Q; qi++) {
            cin >> QL >> QK;
            if (a[QL] < QK) {
                cout << -1 << " ";
                continue;
            }
            l = QL;
            r = N;
            ans = QL;
            while (l <= r) {
                mid = (l + r)/2;

                tans = 0;
                for (int i = 0; i < 30; i++) {
                    tans |= ((ba[i][mid] - ba[i][QL-1]) == mid-QL+1) << i;
                }

                if (tans >= QK) {
                    ans = max(ans, mid);
                    l = mid+1;
                } else r = mid-1;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}
