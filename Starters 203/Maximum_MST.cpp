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
#define int long long int
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n"
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define rep0(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;
#define setbit(x) __builtin_popcountll(x)
#define parity(x) __builtin_parityll(x)
#define clz(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctzll(x)
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));

#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
const double PI = acos(-1);

void fastIO() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
}

ll power(ll a, ll b, ll mod = MOD) {
   ll res = 1;
   while (b > 0) {
       if (b & 1) res = res * a % mod;
       a = a * a % mod;
       b >>= 1;
   }
   return res;
}

ll modInv(ll a, ll mod = MOD) {
   return power(a, mod - 2, mod);
}


int binaryAsDecimal(int num)
{
   int res = 0, base = 1;
   while (num > 0)
   {
       res += (num % 2) * base;
       base *= 10;
       num /= 2;
   }
return res;
}

bool isPowerOfTwo(ll n) {
   return (n > 0 && (n & (n - 1)) == 0);
}

ll binarySearch(ll low, ll high, function<bool(ll)> check) {
   while (low < high) {
       ll mid = (low + high) / 2;
       if (check(mid)) high = mid;
       else low = mid + 1;
   }
   return low;
}

void vectorPrint(vector<int>& v) {
   for (auto val : v) cout << val << ' ';
   cout << nn;
}

bool isSorted(const vector<int>& arr) {
   for (int i = 1; i < arr.size(); ++i) {
       if (arr[i] < arr[i - 1]) return false;
   }
   return true;
}

bool isSortedDescending(const vector<int>& arr) {
    for (int i = 1; i < (int)arr.size(); ++i) {
        if (arr[i] > arr[i - 1]) return false;
    }
    return true;
}

string intToBinary(int n){
   if(n == 0) return "0";
   string res = "";
   while(n > 0){
       res += (n % 2) + '0';
       n /= 2;
   }
   reverse(res.begin(), res.end());
   return res;
}

vector<int> prefixSum(const vector<int>& v) {
    int n = v.size();
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }
    return pre;
}

vector<int> suffixSum(const vector<int>& v) {
    int n = v.size();
    vector<int> suf(n);
    suf[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = suf[i + 1] + v[i];
    }
    return suf;
}

int arrayGCD(const vector<int>& v) {
    int res = v[0];
    for (int i = 1; i < v.size(); i++) {
        res = gcd(res, v[i]);
        if (res == 1) break;
    }
    return res;
}

int arrayLCM(const vector<int>& v) {
    int res = v[0];
    for (int i = 1; i < v.size(); i++) {
        res = lcm(res, v[i]);
    }
    return res;
}

map<int, int> frequencyCount(const vector<int>& v) {
    map<int, int> freq;
    for (auto val : v) {
        freq[val]++;
    }
    return freq;
}

map<char, int> charFrequency(const string& s) {
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    return freq;
}

int mostFrequentElement(const vector<int>& v) {
    map<int, int> freq;
    int maxFreq = 0, mostFreq = v[0];
    for (int val : v) {
        freq[val]++;
        if (freq[val] > maxFreq) {
            maxFreq = freq[val];
            mostFreq = val;
        }
    }
    return mostFreq;
}

const int N = 1e6 + 5;
bool is_prime[N];
void sieve(){
   fill(is_prime, is_prime + N, true);
   is_prime[0] = is_prime[1] = false;
   for(int i = 2; i * i < N; i++){
       if(is_prime[i]){
           for(int j = i * i; j < N; j += i){
               is_prime[j] = false;
           }
       }
   }
}

ll factorial(ll n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

const int MAXN = 2e5 + 5;
ll fact[MAXN];

void computeFactorials(int n, ll mod = MOD) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

vector<int> prefixMinimum(const vector<int>& a) {
    int n = a.size();
    vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = min(pre[i - 1], a[i]);
    }
    return pre;
}

vector<int> suffixMinimum(const vector<int>& a) {
    int n = a.size();
    vector<int> suf(n);
    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = min(suf[i + 1], a[i]);
    }
    return suf;
}

vector<int> prefixMaximum(const vector<int>& a) {
    int n = a.size();
    vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = max(pre[i - 1], a[i]);
    }
    return pre;
}

vector<int> suffixMaximum(const vector<int>& a) {
    int n = a.size();
    vector<int> suf(n);
    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = max(suf[i + 1], a[i]);
    }
    return suf;
}
void Solve() {
    read(n); 
    int m = (n * (n - 1)) / 2; 
    readv(a, m); 
    sort(all(a)); 
    int ans = 0; 
    for(int i = 0; i < n - 1; i++){
        ans += a[i]; 
    }
    cout << ans << nn; 
}

int32_t main() {
    fastIO();
#ifdef LOCAL
    auto start = chrono::high_resolution_clock::now();
#endif

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    cerr << "Time: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms\n";
#endif

    return 0;
}