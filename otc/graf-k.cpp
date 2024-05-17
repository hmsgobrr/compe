#include <bits/stdc++.h>
using namespace std;
int N, p, ans;
vector<int> graf[2005];
bool visited[2005] = {0},  grouped[2005] = {0};
void dfs(int start) {
    visited[start] = true;
    for (int i = 0; i < graf[start].size(); i++) {
        if (!visited[graf[start][i]]) dfs(graf[start][i]]);
    }
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> p;
        if (p != -1) graf[i].push_back(p-1);
    }

    ans = 0;
    for (int i = 0; i < N; i++) {
        if (grouped[i]) continue;

        memset(visited, 0, sizeof(visited));
        dfs(i);
        ans++;
        for (int j = 0; j < N; j++) {
            if (!visit[i]) {
                grouped[i] = true;
            }
        }
    }
    cout << ans << endl;
}

