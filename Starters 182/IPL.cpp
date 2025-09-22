/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/* ======================================
Author    : TSI_Sabit
Region    : Bangladesh
Bangladesh University of Business and Technology
 ====================================== */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nx "\n"
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << endl;
#define int long long int

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
const double PI = acos(-1);
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
ll power(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isPowerOfTwo(ll n)
{
    return (n > 0 && (n & (n - 1)) == 0);
}

void vectorPrint(vector<int> &v)
{
    for (auto val : v)
        cout << val << ' ';
    cout << nx;
}

void Solve()
{
    int X;
    cin >> X;

    if (X >= 7)
    {
        cout << "THALA" << nx;
    }
    else
    {
        cout << "BOOM" << nx;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    //cin >> t;
    //while (t--)
    {
        Solve();
    }
    return 0;
}