#include <bits/stdc++>
int N, M, a, b, c, mat[100][100];
int main() {
    cin >> N >> M;

    memset(mat, -1, sizeof(mat));
    for (int i = 0; i < M; i++) {
        cin >> a >> b >> c;
        mat[a][b] = c;
        mat[b][a] = c;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

