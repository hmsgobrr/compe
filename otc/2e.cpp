#include <bits/stdc++.h>
using namespace std;
int T, N, M, r, b, rmax, bmax, pr[105], pb[105];
int main() {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        memset(pr, 0, sizeof(pr));
        memset(pb, 0, sizeof(pb));
        cin >> N;
        rmax = 0;
        for (int i = 1; i <= N; i++) {
            cin >> r;
            pr[i] = pr[i-1] + r;
            rmax = max(rmax, pr[i]);
        }
        cin >> M;
        bmax = 0;
        for (int i = 1; i <= M; i++) {
            cin >> b;
            pb[i] = pb[i-1] + b;
            bmax = max(bmax, pb[i]);
        }

        cout << rmax+bmax << endl;
    }
}

