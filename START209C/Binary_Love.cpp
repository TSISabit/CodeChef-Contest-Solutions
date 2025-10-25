#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n; 
    string s; 
    cin >> n >> s; 
    int ans = 0; 
    for(int i = 0; i < n; i++){
        if(s[i] != s[i - 1]) ans++; 
    }
    if(ans >= 3) cout << "Alice\n"; 
    else cout << "Bob\n"; 
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