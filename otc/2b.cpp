#include <bits/stdc++.h>
using namespace std;
int T, N, Q, l, r, mid;
long long a[200005], pa[200005], ans;
int main() {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        cin >> N >> Q;
        memset(a, 0, sizeof(a));
        memset(pa, 0, sizeof(pa));
        for (int i = 1; i <= N; i++) {
            cin >> a[i];
            pa[i] = pa[i-1] + a[i];
        }
        for (int i = i; i <= Q; i++) {
            cin >> Q;
            l = 1;
            r = N;
            ans = 0;

        }
    }
}

