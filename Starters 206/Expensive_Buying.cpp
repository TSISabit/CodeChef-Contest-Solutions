#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, k; 
    cin >> n >> k; 
    vector<int>a(n); 
    for(int i = 0; i < n; i++) cin >> a[i]; 
    sort(a.rbegin(), a.rend()); 
    int sum = 0; 
    for(int i = 0; i < k; i++){
        sum += a[i]; 
    }
    cout << sum << endl; 
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