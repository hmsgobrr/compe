#include <bits/stdc++.h>
using namespace std;
int T, sidx;
char s[11], tmp;
bool sam;
int main() {
    for (cin >> T; T--;) {
        cin >> s;
        sam = false;
        for (int i = 0; s[i+1] != '\0'; i++) {
            if (s[i] != s[i+1]) {
                sam = true;
                tmp = s[i];
                s[i] = s[i+1];
                s[i+1] = tmp;
                cout << "YES" << endl << s << endl;
                break;
            }
        }
        if (!sam) cout << "NO" << endl;
    }
}

