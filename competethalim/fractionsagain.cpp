#include <bits/stdc++.h>
using namespace std;
int K, solc, solx[100], soly[100];
int main() {
    for (;scanf("%d", &K) != EOF;) {
        solc = 0;
        for (int y = K+1; y <= 2*K; K++) {
            if ((K*y) % (y-K) == 0) {
                //solx[solc] = K*y/(y-K);
                //soly[solc] = y;
                solc++;
            }
        }

        printf("%d\n", solc);
        for (int i = 0; i < solc; i++) {
            printf("1/%d = 1/%d + 1/%d\n", K, solx[i], soly[i]);
        }
    }
}

