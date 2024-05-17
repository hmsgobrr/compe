#include <bits/stdc++.h>
using namespace std;
int i = 0, N, M;
int vits[1005][3];
int minum(int money, int totvit, int g) {
    if (money <= 0) return 0;
    if (g == N) return totvit;
    return max(minum(money, totvit, g+1), minum(money-vits[g][0], totvit+vits[g][1], g+1));
}
int main() {
    for (scanf("%d %d", &N, &M); i < N; i++) {
        scanf("%d %d %d", &vits[i][0], &vits[i][1], &vits[i][2]);
    }
    printf("%d\n", minum(M, 0, 0));
}

