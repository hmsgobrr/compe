#include <iostream>
using namespace std;
int t, n, c, maxS;
int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        maxS = 0;
        for (;n--;) {
            cin >> c;
            maxS = max(maxS, c);
        }
        cout << "Case " << i  << ": " << maxS << endl;
    }
}

