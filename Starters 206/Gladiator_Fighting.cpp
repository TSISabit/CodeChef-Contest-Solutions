#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;

    int mn;
    if (n == 2)
    {
        mn = 0;
    }
    else
    {
        mn = n - 2;
    }

    int mx = (n - 1) * (n - 2) / 2;

    cout << mn << " " << mx << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}