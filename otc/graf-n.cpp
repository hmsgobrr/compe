#include <bits/stdc++.h>
using namespace std;
int N, M, K, fx, fy, dist[2005][2005], maxDist;
//pair<int, int>[12] kt;
bool visited[2005][2005];
queue<pair<int, int>> bfs;
pair<int, int> currNode, ans;
int main() {
    freopen ("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(visited));

    cin >> N >> M >> K;
    for (int i = 0; i < K; i++) {
        cin >> fx >> fy;
        bfs.push(make_pair(fx, fy));
        visited[fx][fy] = true;
        dist[fx][fy] = 0;
        ans = make_pair(fx, fy);
    }

    while (!bfs.empty()) {
        currNode = bfs.front();
        bfs.pop();
        int is[] = { currNode.first, currNode.first, currNode.first-1, currNode.first+1 };
        int js[] = { currNode.second-1, currNode.second+1, currNode.second, currNode.second };
        for (int i = 0; i < 4; i++) {
            if (is[i] > N || is[i] < 1 || js[i] > M || js[i] < 1 || visited[is[i]][js[i]]) continue;
            visited[is[i]][js[i]] = true;
            dist[is[i]][js[i]] = dist[currNode.first][currNode.second] + 1;
            bfs.push(make_pair(is[i], js[i]));
        }
    }

    maxDist = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (dist[i][j] > maxDist) {
                maxDist = dist[i][j];
                ans.first = i;
                ans.second = j;
            }
        }
    }

    cout << ans.first << " " << ans.second << endl;
}

