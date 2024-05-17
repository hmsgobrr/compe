#include <bits/stdc++.h>
using namespace std;
int N, M;
int main() {
    cin >> N >> M;
    if (N == 1) cout << (M*(1+M))/2 << endl;
    else cout << 1 + ((M-1)*(2+M))/2 + M+2 << endl;
}

