#include <bits/stdc++.h>
using namespace std;
int T, N, A, B;
int main() {
    cin >> T;
    while (T--) {
        cin >> N >> A >> B;
        if (B < 2*A) {
            cout << (N/2)*B + (N % 2)*A;
        } else {
            cout << N*A;
        }
        cout << endl;
    }
}

