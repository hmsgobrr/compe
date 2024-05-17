#include <bits/stdc++.h>
using namespace std;
int T, N;
char g[2][200005];
bool visited[2][200005], can;
int nx[] = { 1, -1, 0, 0 };
int ny[] = { 0, 0, -1, 1 };
void dfs(int i, int j) {
    if (visited[i][j]) return;
    if (i == 1 && j == (N-1)) can = true;
    visited[i][j] = true;
    int nexti, nextj;
    for (int k = 0; k < 4; k++) {
        nexti = i+nx[k];
        nextj = j+ny[k];
        if (nexti < 0 || nexti > 1 || nextj < 0 || nextj > (N-1)) continue;
        dfs(nexti, ((g[nexti][nextj] == '>') ? (nextj+1) : (nextj-1)));
    }
}
int main() {
    cin >> T;
    while (T--) {
        memset(visited, false, sizeof(visited));
        cin >> N;
        for (int i = 0; i < N; i++) cin >> g[0][i];
        for (int i = 0; i < N; i++) cin >> g[1][i]; 
        can = false;
        dfs(0, 0);
        cout << (can ? "YES" : "NO") << endl;
    }
}

