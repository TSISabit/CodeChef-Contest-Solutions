#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int x, y; cin >> x >> y; 
    int even = 0, odd = 0; 
    for(int i = x; i <= y; i += x){
        if(i % 2 == 0) even += i; 
        else odd += i; 
    }
    if(even >= odd) cout << "Yes\n"; 
    else cout << "No\n"; 
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