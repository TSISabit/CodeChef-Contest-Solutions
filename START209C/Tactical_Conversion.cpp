#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n; 
    string s; 
    cin >> n >> s; 
    vector<int> a; 
    for(int i = 0; i < n; i++)
        if(s[i] == '1') a.push_back(i); 

    bool ok = false;

    if(a.size() <= 1) {
        ok = true;
    } 
    else if(a.size() == 2 && abs(a[0] - a[1]) > 1) {
        ok = true;
    }
    else if(a.size() == 3 && a[2] - a[0] != 2) {
        ok = true;
    }
    else if(a.size() > 3) {
        ok = true;
    }

    cout << (ok ? "Yes\n" : "No\n");
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