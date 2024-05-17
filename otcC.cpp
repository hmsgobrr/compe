#include <bits/stdc++.h>
using namespace std;
int T, len, newLen;
char s[200005];
bool met[26];
int main() {
    for (cin >> T; T--;) {
        memset(s, '\0', sizeof(char)*200005);
        memset(met, 0, sizeof(met));
        cin >> s;
        for (newLen = 0, len = 0; s[len] != '\0'; len++) {
            if (met[s[len] - 'a']) {
                newLen += 2;
                memset(met, 0, sizeof(met));
            } else met[s[len] - 'a'] = true;
        }
        cout << len - newLen << endl;
    }
}

