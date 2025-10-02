#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n; 
    cin >> n; 
    vector<int>a; 
    for(int i = 2; i <= n; i += 2){
        a.push_back(i); 
    }
    for(int i = 1; i <= n; i += 2){
        a.push_back(i); 
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' '; 
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