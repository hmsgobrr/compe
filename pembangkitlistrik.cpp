#include <bits/stdc++.h>
using namespace std;
int N, M, K, a[100005], b[100005], des, tdes[100005], u, v;
long long ans;
bool visited[100005];
vector<int> g[100005];
void dfs(int node, int ccid) {
    if (visited[node]) return;
    visited[node] = true;
    //cout << "DFS! " << tdes[ccid] << " soshite " << a[node] << endl;
    tdes[ccid] = min(tdes[ccid], a[node]);
    for (int& p : g[node]) {
        dfs(p, ccid);
    }
}
int main() {
    memset(tdes, 1e9+1, sizeof(tdes));

    cin >> N >> M >> K;
    for (int i = 0; i < N; i++) cin >> a[i];
    //cout << "YEA ";
    //for (int i = 0; i < N; i++) cout << a[i] << " ";
    //cout << endl;
    for (int i = 0; i < M; i++) cin >> b[i];
    for (int i = 0; i < K; i++) {
        cin >> u >> v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);
    }

    des = 0;
    for (int i = 0; i < N; i++) {
        if (visited[i]) continue;
        dfs(i, des);
        des++;
    }
    //for (int i = 0; i < des; i++) cout << tdes[i] << " ";
    //cout << endl;

    if (M < des) {
        cout << -1 << endl;
        return 0;
    }

    sort(tdes,tdes+des);
    sort(b, b+M);

    ans = 0;
    for (int i = 0; i < des; i++) {
        //cout << "WA " << tdes[i] << endl;;
        ans += ((long long)tdes[i]) * ((long long)b[des-1-i]);
    }

    cout << ans << endl;
}

