#include <bits/stdc++.h>
using namespace std;
int T, N, a[200005], maxdel;
pair<int, int> gaps[200005];
int getgap(pair<int, int>& a) {
    return a.second-a.first+1;
}
bool gapsz(pair<int, int>& a, pair<int, int>& b) {
    return getgap(a) > getgap(b);
}
int main() {
    cin >> T;
    while (T--) {
        cin >> N;
        for (int i = 1; i <= N; i++) {
            cin >> a[i];
            if (gaps[a[i]].first == 0) {
                gaps[a[i]] = make_pair(i, i);
            } else {
                gaps[a[i]].second = i;
            }
        }
        maxdel = 0
        sort(gaps, gaps+N+1, gapsz);
        for (int i = 0; i < (N+1); i++) {
            if (getgap(gaps[i]) <= 1) continue;
            
        }
    }
}

