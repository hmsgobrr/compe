#include <bits/stdc++.h>
using namespace std;
int N, A, B, s[35], low, hi;
long long s1[131075], s2[131075], subs;
void buildsum(int beg, int size, long long (&ar)[131075]) {
    long long sum;
    for (int i = 0; i < (1 << size); i++) {
        sum = 0;
        for (int j = 0; j < size; j++) {
            if (i & (1 << j)) {
                sum += s[beg+j];
            }
        }
        ar[i] = sum;
    }
}
int binser(long long a, bool lowerBound) {
    int l = 0;
    int r = (1 << (N/2 + N%2)) - 1;
    int ans = -1;
    int mid;
    while (l <= r) {
        mid = (l+r)/2;
        if (lowerBound) {
            if (s2[mid] >= A-a) {
                ans = mid;
                r = mid-1;
            } else l = mid+1;
        } else {
            if (s2[mid] <= B-a) {
                ans = mid;
                l = mid+1;
            } else r = mid-1;
        }
    }
    return ans;
}
int main() {
    cin >> N >> A >> B;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    buildsum(0, N/2, s1);
    buildsum(N/2, N/2 + N%2, s2);
    sort(s2, s2+(1 << (N/2+N%2)));
   
    subs = 0;
    for (int i = 0; i < (1 << (N/2)); i++) {
        low = binser(s1[i], true);
        hi = binser(s1[i], false);

        if (low != -1 && hi != -1) subs += hi-low+1;
    }

    cout << subs << endl;
}
