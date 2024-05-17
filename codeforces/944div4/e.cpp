#include <bits/stdc++.h>
using namespace std;
int T, N, K, Q, D, a[100005], b[100005], l, r, mid, ans;
int kec;
int main() {
    for (cin >> T; T--;) {
        cin >> N >> K >> Q;
        a[0] = 0;
        b[0] = 0;
        for (int i = 1; i <= K; i++) cin >> a[i];
        for (int i = 1; i <= K; i++) cin >> b[i];
        for (;Q--;) {
            cin >> D;
            if (D == 0) {
                cout << 0 << " ";
                continue;
            }
            l = 1;
            r = K;
            ans = -1;
            while (l <= r) {
                mid = (l + r)/2;

                if (a[mid] >= D) {
                    ans = mid;
                    r = mid-1;
                } else l = mid+1;
            }
            
            cout << fixed << setprecision(0) << b[ans-1] + floor((double)(D-b[ans-1]) / ((double)(a[ans] - a[ans-1]) / (double)(b[ans] - b[ans-1]))) << " ";
        }
        cout << endl;
    }
}

