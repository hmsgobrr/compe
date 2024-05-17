#include <bits/stdc++.h>
using namespace std;
int N, A, B, C,  memo[8005];
int potong(int l) {
    if (l > N) return -10000000;
    if (l == N) return 0;
    
    int& has = memo[l];
    if (has != -1) return has;
    return has = 1 + max(max(potong(l+A), potong(l+B)), potong(l+C));
}
int main() {
    memset(memo, -1, sizeof(memo));
    cin >> N >> A >> B >> C;
    cout << potong(0) << endl;
}

