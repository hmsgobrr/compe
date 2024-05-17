#include <bits/stdc++.h>
using namespace std;
int T, N, M, a[200005], b[200005];
long long memo[200005], ans;
long long pr(int st) {
    if (st >= N) return 0;
    long long &f = memo[st];
    if (f != -1) return f;
    return f = min(a[st], b[st]) + pr(st+1);
}
int main() {
    cin >> T;
    while (T--) {
        cin >> N >> M;
        memset(memo, -1, sizeof(memo));
        for (int i = 0; i < N; i++) cin >> a[i];
        for (int i = 0; i < N; i++) cin >> b[i];
        ans = LLONG_MAX;
        for (int i = 0; i < M; i++) {
            ans = min(ans, a[i] + pr(i+1));
        }
        cout << ans << endl;
    }
}

