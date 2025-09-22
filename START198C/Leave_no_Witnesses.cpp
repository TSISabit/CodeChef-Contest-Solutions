#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

bool has_witness_in_range(const string& b, int n) {
    for (int x = 1; x <= n; ++x) {
        vector<int> s1, s2;
        for (int i = 1; i <= n; ++i) {
            if (b[i - 1] == '0') {
                s1.push_back(x & i);
            } else {
                s2.push_back(x | i);
            }
        }
        bool disjoint = true;
        for (int val1 : s1) {
            for (int val2 : s2) {
                if (val1 == val2) {
                    disjoint = false;
                    break;
                }
            }
            if (!disjoint) {
                break;
            }
        }
        if (disjoint) {
            return true;
        }
    }
    return false;
}

int solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    if (n == 4 || n == 8 || n == 16 || n == 32 || n == 64 || n == 128 || n == 256) {
        return -1;
    }

    if (n % 2 != 0) {
        int cost = 0;
        int m = (n + 1) / 2;
        if (a[m - 1] == '0') {
            cost++;
        }
        return cost;
    }

    int m = n / 2;
    int cost = 0;
    if (a[m - 1] == '0') {
        cost++;
    }
    if (a[n - 1] == '1') {
        cost++;
    }
    
    return cost;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}