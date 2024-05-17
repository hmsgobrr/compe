#include <bits/stdc++.h>
using namespace std;
int M, job[10005][3], lastday, memo[10005][10005];
int kerja(int hari, int uang) {
    if (hari > lastday) return uang;

    int& ans = memo[hari][uang];
    if (ans > -1) return ans;
    for (int i = 0; i < M; i++) {
        if (hari == job[i][0]) {
            ans = max(ans, kerja(job[i][1]+1, uang + job[i][2]));
        }
    }

    return ans = max(ans, kerja(hari+1, uang));
}
int main() {
    cin >> M;
    lastday = 0;
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < M; i++) {
        // W Mulai, W Selesai, Upah
        cin >> job[i][0] >> job[i][1] >> job[i][2];
        lastday = max(lastday, job[i][0]);
    }

    cout << kerja(1, 0) << endl;
}

