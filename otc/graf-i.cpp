#include <bits/stdc++.h>
using namespace std;
int T, N, M, lek[1005][1005], ld, li, ans, lakes[500005];
bool visited[1005][1005];
void dfs(int i, int j) {
    if (i < 0 || i >= N || j < 0 || j >= M) return;
    if (visited[i][j] || lek[i][j] == 0) return;
    visited[i][j] = true;
    ld += lek[i][j];
    dfs(i, j+1);
    dfs(i, j-1);
    dfs(i+1, j);
    dfs(i-1, j);
}
int main() {
    cin >> T;
    while (T--) {
        memset(visited, 0, sizeof(visited));
        cin >> N >> M;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> lek[i][j];
            }
        }
        li = 0;
        memset(lakes, 0, sizeof(lakes));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (lek[i][j] == 0 || visited[i][j]) continue;
                ld = 0;
                dfs(i, j);
                lakes[li] = ld;
                li++;
            }
        }
        ans = 0;
        for (int i = 0; i < li; i++) {
            ans = max(ans, lakes[i]);
        }
        cout << ans << endl;
    }
}

