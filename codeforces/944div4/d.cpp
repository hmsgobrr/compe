#include <bits/stdc++.h>
using namespace std;
int T, ans;
char bs[505];
int main() {
    for (cin >> T; T--;) {
        cin >> bs;
        ans = 1;
        for (int i = 0; bs[i+1] != '\0'; i++) {
            if (bs[i] == '1' && bs[i+1] == '0') ans++;
        }
        cout << ans << endl;
    }
}

