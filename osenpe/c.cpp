#include <bits/stdc++.h>
using namespace std;
int N, a[100005];
long long M;
long long tebang(int y) {
    long long has = 0;
    for (int i = 0; i < N; i++) {
        has += max(a[i]-y, 0);
    }
    return has;
}
int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> a[i];

    int l = 0;
    int r = 1000000;
    int mid;
    int ans = -1;
    while (l <= r) {
        mid = (l + r)/2;

        if (tebang(mid) >= M) {
            ans = mid;
            l = mid+1;
        } else r = mid-1;
    }

    cout << ans << endl;
}

