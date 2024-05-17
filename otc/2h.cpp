#include <bits/stdc++.h>
using namespace std;
int T, N, D, l, r, mid, ans;
long long a[200005], pa[200005], C;
int gc(int idx) {
    if (idx > N) return pa[N];
    return pa[idx];
}
int getcoin(int k) {
    int sd = D%(k+1);
    return (D/(k+1))*gc(k+1) + gc(sd);
}
int main() {
    cin >> T;
    while (T--) {
        cin >> N >> C >> D;
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        sort(a, a+N, greater<>());
        pa[0] = 0;
        for (int i = 1; i <= N; i++) {
            pa[i] = pa[i-1] + a[i-1];
        } 

        if (gc(D) >= C) {
            cout << "Infinity\n";
            continue;
        }

        l = 0;
        r = D;
        ans = -1;
        while (l <= r) {
            mid = (l + r)/2;

            if (getcoin(mid) >= C) {
                ans = mid;
                l = mid + 1;
            } else r = mid - 1;
        }

        if (ans < 0) cout << "Impossible" << endl;
        else cout << ans << endl;
    }
}

