#include <bits/stdc++.h>
using namespace std;
int T, N, pre[200005];
//int exp(int a, int b) {
//    if (b == 0) return 1;
//    int tmp = exp(a, b/2);
//    tmp *= tmp;
//    of (b & 1) tmp *= a;
//    return tmp
//}
int s(int d) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += d % 10;
        d /= 10;
    }
    return sum;
}
int main() {
    for (int i = 1; i <= 200000; i++) {
        pre[i] = pre[i-1] + s(i);
    }

    cin >> T;
    while (T--) {
        cin >> N;
        cout << pre[N] << endl;
    }
}

