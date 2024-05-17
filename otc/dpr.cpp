#include <bits/stdc++.h>
using namespace std;
int T, N, a[200005], ans, memo[200005];
int dp(int i) {
    if (i > N) return 0;

    int& has = memo[i];
    if (has != -1) return has;

    return has = a[i] + dp(i + a[i]);
}
int main() {
    cin >> T;
    while (T--) {
        memset(memo, -1, sizeof (memo));
        
        cin >> N;
        for (int i = 1; i <= N; i++) {
            cin >> a[i];
        }

        ans = -1;
        for (int i = 1; i <= N; i++) {
            ans = max(ans, dp(i));
        }
        cout << ans << endl;
    }
}

