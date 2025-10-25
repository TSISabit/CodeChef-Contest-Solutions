#include <bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) a.push_back(i);
    }
    sort(a.rbegin(), a.rend());
    for (int x : a) {
        for (int i = 1; i <= n; i++) {
            if (gcd(i, n) == x) cout << i << " ";
        }
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