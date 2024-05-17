#include <bits/stdc++.h>
using namespace std;
int H, U, D, F;
float ch, cs;
int main() {
    for (;cin >> H >> U >> D >> F, H;) {
        ch = 0;
        cs = U;
        int i = 1;
        for (;; i++) {
            ch += max(cs, 0.0f);
            if (ch > H) break;
            ch -= D;
            if (ch < 0) break;
            cs -= F/100.0f * (float)U;
        }
        cout << (ch > H ? "success on day " : "failure on day ") << i << endl;
    }
}

