#include <bits/stdc++,h>
using namespace std;
vector<pair<int, int>> l[100];
int N, M, a, b, c;
int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> a >> b >> c;
        l[a].push_back(make_pair(b, c));
        l[b].push_back(make_pair(a, c));
    }

    int cari = 5;
    for (int i = 0; i < l[cari].size(); i++) {
        cout << "{" << l[cari][i].first << ", " << l[cari][i].second << "} ";
    }
    cout << endl;
    
}

