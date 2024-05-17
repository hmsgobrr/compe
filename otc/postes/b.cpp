#include <bits/stdc++.h>
using namespace std;
int T, N, a[55];
bool ngs, pos;
int main() {
    cin >> T;
    while (T--) {
        cin >> N;
        pos = true;
        ngs = false;
        a[0] = -1;
        for (int i = 1; i <= N; i++) cin >> a[i];
        for (int i = N; i >= 1; i--) {
            if (ngs) {
                a[i] /= 10;
                ngs = false;
            }
            if (a[i] < a[i-1]) {
                if (a[i-1]%10 > a[i] || a[i-1]%10 < a[i-1]/10) {
                    pos = false;
                    break;
                }
                ngs = true;
            }
        }
        cout << (pos ? "YES" : "NO") << endl;
    }
}

