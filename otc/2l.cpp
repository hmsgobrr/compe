#include <bits/stdc++.h>
using namespace std;
int N, M, v, u, cc;
vector<int> graf[200005];
bool visited[200005];
bool dfs(int node) { 
    visited[node] = true;
    bool cycle = (graf[node].size() == 2);
    bool connectsToACycle = true;
    for (int& p : graf[node]) {
        if (!visited[p]) {
            bool d = dfs(p);
            if (!d) connectsToACycle = false;
        }
    }
    return (!cycle ? false : connectsToACycle);
}
int main() {
    memset(visited, false, sizeof(visited));
    cin >> N >> M;

    for (int i = 1; i <= M; i++) {
        cin >> v >> u;
        graf[v].push_back(u);
        graf[u].push_back(v);
    }

    cc = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            if (dfs(i)) cc++;
        }
    }

    cout << cc << endl;
}

