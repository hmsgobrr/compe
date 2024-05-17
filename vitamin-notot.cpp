#include <bits/stdc++.h>
using namespace std;
int i = 0, N, M;
int vits[1005][3];
int mem[10005][1005];
int minum(int money, int g) {
    if (money <= 0) return 0;
    int harga = vits[g][0], kandungan = vits[g][1], dosis = vits[g][2];
    if (g == N) return money >= harga ? kandungan : 0;
    int& ans = mem[money][g];
    if (ans > -1) return ans;

    if (money < harga) return ans = minum(money, g+1);
    else return ans = max(minum(money, g+1), max(kandungan + minum(money-harga, g+1), dosis == 0 ? (kandungan + minum(money-harga, g)) : -1));
}
int main() {
    memset(mem, -1, sizeof(int)*10005*1005);
    for (scanf("%d %d", &N, &M); i < N; i++) {
        // Harga, vitamin, dosis
        scanf("%d %d %d", &vits[i][0], &vits[i][1], &vits[i][2]);
    }
    printf("%d\n", minum(M, 0));
}

