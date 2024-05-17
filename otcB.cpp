#include <bits/stdc++.h>
using namespace std;
int T;
long long N, frek[15][15], comb;
char s[100005][2];
int main () {
    cin >> T;
    for (int ti = 0; ti < T; ti++) {
        memset(frek, 0, sizeof(frek));
        comb = 0;
        cin >> N;
        for (long long i = 0; i < N; i++) {
            cin >> s[i][0] >> s[i][1];
            frek[s[i][0] - 'a'][s[i][1] - 'a']++;
        }
        // for (int i = 0; i < 15; i++) {
        //     for (int j = 0; j < 15; j++) {
        //         cout << frek[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for (long long i = 0; i < N; i++) {
            for (int j = 0; j < 15; j++) comb += frek[s[i][0] - 'a'][j];
            for (int j = 0; j < 15; j++) comb += frek[j][s[i][1] - 'a'];
            comb -= 2*frek[s[i][0] - 'a'][s[i][1] - 'a'];
        }
        cout << comb/2 << endl;
    }
}

