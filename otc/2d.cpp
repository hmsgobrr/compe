#include <bits/stdc++.h>
using namespace std;
int N, Q, l, r, a[100005], pa[100005];
int main() {
    cin >> N;
    memset(a, 0, sizeof(a));
    memset(pa, 0, sizeof(pa));
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
        pa[i] = pa[i-1] + a[i];
    }

    cin >> Q;
    for (int qi = 0; qi < Q; qi++) {
        cin >> l >> r;
        cout << pa[r+1] - pa[l] << endl;
    }
}

