#include <bits/stdc++.h>
using namespace std;
int N, p[2005], ans;
bool visited[2005];
int depth[2005];
vector<int> graf[2005];
void dfs(int node, int d) {
    if (visited[node]) return;
    visited[node] = true;
    depth[node] = d;
    for (int& a : graf[node]) {
        dfs(a, d+1);
    }
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> p[i];
        if (p[i] != -1) graf[p[i]-1].push_back(i);
    }
    for (int i = 0; i < N; i++) {
        if (p[i] == -1) dfs(i, 1);
    }
    ans = 0;
    for (int i = 0; i < N; i++) {
        ans = max(ans, depth[i]);
    }
    cout << ans << endl;
}

