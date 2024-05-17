#include <bits/stdc++.h>
using namespace std;
char a[100005];
char fin[100005];
bool o, s, n;
int ans, fi;
int main() {
    cin >> a;
    o = false;
    s = false;
    n = false;
    ans = 0;
    fi = 2;
    for (int i = 0; a[i] != '\0'; i++) {
        //cout << a[i] << endl;
        if (o && s && n) {
            o = false;
            s = false;
            n = false;
        }
        if (a[i] == 'O' && !o && fin[fi-1] != 'O' && fin[fi-2] != 'O') {
            ans++;
            o = true;
            fin[fi] = a[i];
            fi++;
        } else if (a[i] == 'S' && !s && fin[fi-1] != 'S' && fin[fi-2] != 'S') {
            ans++;
            s = true;
            fin[fi] = a[i];
            fi++;
        } else if (a[i] == 'N' && !n && fin[fi-1] != 'N' && fin[fi-2] != 'N') {
            ans++;
            n = true;
            fin[fi] = a[i];
            fi++;
        }
    }

    cout << (ans < 3 ? -1 : ans) << endl;
}

