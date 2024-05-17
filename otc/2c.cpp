#include <bits/stdc++.h>
using namespace std;
int T, N, a[105], da[105];
long long H, l, r, mid, dam, ans;
int main() {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        cin >> N >> H;
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        da[N-1] = INT_MAX;
        for (int i = 0; i < (N-1); i++) {
            da[i] = a[i+1] - a[i];
        }

        l = 1;
        r = (long long)1e18;
        while (l <= r) {
            mid = (l + r)/2;

            dam = 0;
            for (int i = 0; i < N; i++) {
                dam += min(mid, (long long)da[i]);
            }

            if (dam >= H) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}

