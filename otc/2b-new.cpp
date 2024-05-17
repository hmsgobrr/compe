#include <bits/stdc++.h>
using namespace std;
long long T, N, Q, k, a, l, r, mid, ansid, amp[200005], apr[200005];
int main() {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        cin >> N >> Q;

        memset(amp, 0, sizeof(amp));
        memset(apr, 0, sizeof(apr));
        for (int i = 1; i <= N; i++) {
            cin >> a;
            amp[i] = max(amp[i-1], a);
            apr[i] = apr[i-1] + a;
        }
        // cout << " DEB: ";
        // for (int i = 1; i <= N; i++) {
        //     cout << amp[i] << " ";
        // }
        // cout << endl;
        // cout << " DEB: ";
        // for (int i = 1; i <= N; i++) {
        //     cout << apr[i] << " ";
        // }
        // cout << endl;

        for (int i = 1; i <= Q; i++) {
            cin >> k;
            l = 1;
            r = N;
            ansid = 0;
            while (l <= r) {
                mid = (l + r)/2;

                if (amp[mid] <= k) {
                    ansid = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            cout << apr[ansid] << " ";
        }
        cout << endl;
    }
}

