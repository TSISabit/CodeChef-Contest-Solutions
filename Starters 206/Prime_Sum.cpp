#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            c1++;
        else if (a[i] == 2)
            c2++;
        else if (a[i] == 3)
            c3++;
    }

    int ans = 0;
    ans += 1LL * c1 * (c1 - 1) / 2;
    ans += 1LL * c1 * c2;
    ans += 1LL * c2 * c3;

    cout << ans << endl;
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