#include <bits/stdc++.h>
int T, D, L[10005], H[10005], Q, P;
char M[10005][22], cm[22];
bool havans;
int main() {
    for (scanf("%d", &T); T--;) {
        scanf("%d", &D);

        memset(M, 0, sizeof(M));
        memset(L, 0, sizeof(L));
        memset(H, 0, sizeof(H));
        //memset(cm, 0, 22);

        for (int i = 0; i < D; i++) {
            scanf("%s %d %d", &M[i], &L[i], &H[i]);
        }

        for (scanf("%d", &Q); Q--;) {
            scanf("%d", &P);
            havans = false;
            for (int i = 0; i < D; i++) {
                if (P >= L[i] && P <= H[i]) {
                    if (!havans) {
                        havans = true;
                        strcpy(cm, M[i]);
                    } else {
                        havans = false;
                        break;
                    }
                }
            }
            printf("%s\n", havans ? cm : "UNDETERMINED");
        }
        if (T > 0) printf("\n");
    }
}

