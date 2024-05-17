#include <bits/stdc++.h>
using namespace std;
long long T, N, K, ans, a[200005], reqbit[31];
int main() {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        memset(reqbit, 0, sizeof(reqbit));
        cin >> N >> K;
        ans = 0;
        for (int i = 0; i < N; i++) {
            cin >> a[i];
            for (int j = 0; j <= 30; j++) {
                if (a[i] & (1 << j)) reqbit[j]++;
            }
        }
        //for (int i = 0; i <= 30; i++) cout << reqbit[i] << " ";
        //cout << endl;
        for (int i = 30; i >= 0; i--) {
            if (N - reqbit[i] <= K) {
                ans |= (1 << i);
                K -= (N - reqbit[i]);
            }
        }
        
        cout << ans << endl;
    }
}

