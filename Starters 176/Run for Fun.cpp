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
    int X, Y;
    cin >> X >> Y;

    int Stops = Y / X;
    if (Y % X == 0)
    {
        Stops -= 1;
    }

    cout << Stops << endl;
}
int main()
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