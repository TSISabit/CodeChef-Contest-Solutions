#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int N;
    cin >> N;
    
    if (N == 1) {
        cout << 1 << endl;
        return;
    }
    for (int i = 1; i <= N; ++i) {
        int ans;
        if (i < N) {
            ans = i + 1;
        } else {
            ans = 1;
        }
        cout << ans << (i == N ? "" : " ");
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}