#include <bits/stdc++.h>
using namespace std;
int n, q, h[1069], ph[1069], ans[400700];
long long x;
int main () {
    cin >> n >> q;
    ph[0] = 0;
    for (int i = 1; i <= n; i++) {
        ph[i] = ph[i-1] + ((i & 1) ? (i+1)/2 : (n+1-(i/2)));
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            ans[ph[j] - ph[i-1]]++;
        }
    }

    for (;q > 0; q--) {
        cin >> x;
        cout << (x > 400650 ? 0 : ans[x]) << endl;
    }
}
