#include <bits/stdc++.h>
using namespace std;
int N;
char M[200005];
long long o, os, osn;
int main() {
    cin >> N >> M;
    o = 0;
    os = 0;
    osn = 0;
    for (int i = 0; i < N; i++) {
        if (M[i] == 'O') o++;
        else if (M[i] == 'S') os += o;
        else if (M[i] == 'N') osn += os;
    }

    cout << osn << endl;
}

