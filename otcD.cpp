#include <bits/stdc++.h>
using namespace std;
long long T, N, S;
int main() {
    for (cin >> T; T--;) {
        cin >> N >> S;
//        double a = floor(S/(N*N));
//        int m = S%(N*N);
//        cout <<((N*N - N) == 0 ? m : (N*N-N)) << endl;
//        a -= m % ((N*N - N) == 0 ? 1 : (N*N-N));
        cout << S/(N*N) << endl;
    }
}

