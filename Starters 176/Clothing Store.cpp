/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/* ======================================
Author    : TSI_Sabit
Region    : Bangladesh
Bangladesh University of Business and Technology
 ====================================== */
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
#include <unordered_set>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <list>
#include <deque>
#include <bitset>
#include <numeric>
#include <iterator>
#include <utility>
#include <iomanip>
using namespace std;
#define ll long long
void Solve()
{
    int X, Y, Z, A, B, C;
    cin >> X >> Y >> Z >> A >> B >> C;

    int happy = 0;
    int S = min(X, A);
    happy += S;
    X -= S;
    A -= S;

    int L = min(Y, B);
    happy += L;
    Y -= L;
    B -= L;

    int XL = min(Z, C);
    happy += XL;
    Z -= XL;
    C -= XL;

    int XLtoL = min(Z, B);
    happy += XLtoL;
    Z -= XLtoL;
    B -= XLtoL;

    int XLtoS = min(Z, A);
    happy += XLtoS;
    Z -= XLtoS;
    A -= XLtoS;

    int LtoS = min(Y, A);
    happy += LtoS;
    Y -= LtoS;
    A -= LtoS;

    cout << happy << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}