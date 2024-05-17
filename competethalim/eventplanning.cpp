#include <bits/stdc++.h>
using namespace std;
int main() {
    for (int N, B, H, W, p, nw; scanf("%d %d %d %d", &N, &B, &H, &W) != EOF;) {
        int minPrice = INT_MAX;
        for (int i = 0; i < H; i++) {
            cin >> p;
            for (int j = 0; j < W; j++) {
                cin >> nw;
                if (nw >= N) {
                    minPrice = min(minPrice, p*N);
                }
            }
        }
        cout << ((minPrice > B) ? "stay home" : to_string(minPrice)) << endl;
    }
}

