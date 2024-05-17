#include <bits/stdc++.h>
using namespace std;
int T, N, fans, rans;
long long K, a[200005], fa[200005], ra[200005];
int binser(long long x, bool isF) {
    int l = 1;
    int r = N/2 + N%2;
    int ans = 0;
    int mid;
    long long (&arr)[200005] = (isF ? fa : ra);
    while (l <= r) {
	    mid = (l + r)/2;

	    if (arr[mid] <= x) {
	        ans = mid;
	        l = mid+1;
	    } else r = mid-1;
    }
    return ans + ((ans < N && (x - arr[ans]) > arr[ans+1]) ? 1 : 0);
}
int main () {
    cin >> T;
    while (T--) {
    	cin >> N >> K;
    	fa[0] = 0;
    	ra[0] = 0;
	    for (int i = 1; i <= N; i++) {
	        cin >> a[i];
	        fa[i] = fa[i-1] + a[i];
    	    cout << fa[i] << " ";
        }
        cout << endl;
    	for (int i = 1; i <= N; i++) {
	        ra[i] = ra[i-1] + a[N+1-i];
            cout << ra[i] << " ";	
        }
        cout << endl;

	    fans = binser(K/2 + K%2, true);
	    rans = binser(K/2, false);

	    cout << "\tBOLLO: " << min(fans+rans, N) << endl;
    }
}

