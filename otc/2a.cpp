#include <bits/stdc++.h>
using namespace std;
int T;
long long N, l, r, mid, ans;
int main() {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        cin >> N;
        l = 0;
        r = 1000000000;
        ans = 0;
        while (l <= r) {
            mid = (l + r)/2;
            if ((mid+1)*(mid+1) >= N) {
                ans = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        cout << ans << endl;
    }
}

