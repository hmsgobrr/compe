#include <bits/stdc++.h>
using namespace std;
int T, n, k;
int main() {
    for (cin >> T; T--;) {
        cin >> n >> k;
        cout << min(n, k) << " " << max(n, k) << endl;
    }
}

