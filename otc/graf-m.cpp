#include <bits/stdc++.h>
using namespace std;
int N, M, currNode, nextNode, dist[10005];
bool visited[10005];
queue<int> bfs;
int main() {
    cin >> N >> M;
    bfs.push(N);
    visited[N] = true;
    dist[N] = 0;
    while (!bfs.empty()) {
        currNode = bfs.front();
        bfs.pop();
        for (int i = 0; i < 2; i++) {
            nextNode = (i ? currNode*2 : currNode-1);
            if (nextNode > 10000 || nextNode < 1 || visited[nextNode]) continue;
            visited[nextNode] = true;
            dist[nextNode] = dist[currNode] + 1;
            bfs.push(nextNode);
        }
    }
    cout << dist[M] << endl;
}

