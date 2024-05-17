#include <bits/stdc++.h>
using namespace std;
int N, K, tpal[33], bnum, kans[200005], comp, sol[200005];
int main() {
    memset(kans, 0, sizeof(kans));

    cin >> N >> K;
    bnum = 0
    for (int i = 0; i < 33; i++) {
        tpal[i] = N & (1 << i);
        if (tpal[i]) {
            kans[bnum] = tpal[i];
            bnum++;
        }
    }
    if (bnum == K) {
        cout << "YES" << endl;
        for (int i = 0; i < bnum; i++) cout << kans[i] << " ";
        cout << endl;
        return;
    } else if (bnum < K) {
        comp = kans[bnum-1]-1;

        for (int i = 0; i < (K-bnum); i++) {
            
        }
    } else {
        cout << "NO" << endl;
    }
}

