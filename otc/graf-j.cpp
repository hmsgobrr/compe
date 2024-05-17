#include <bits/stdc++.h>
using namespace std;
int N, ccs;
char s[51];
#define LET_OFS 200003
vector<int> net[200030];
bool visited[200030];
void dfs(int n) {
    if (visited[n]) return;
    visited[n] = true;
    for (int& p : net[n]) {
        dfs(p);
    }
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; s[j] != '\0'; j++) {
            net[i].push_back(LET_OFS+(s[j] - 'a'));
            net[LET_OFS+(s[j] - 'a')].push_back(i);
        }
    }

    ccs = 0;
    for (int i = LET_OFS; i < (LET_OFS+26); i++) {
        if (visited[i]) continue;
        dfs(i);
        ccs++;
    }

    cout << ccs
}

