#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        // Position lists for each number
        vector<vector<int>> posA(N + 1), posB(N + 1);
        for (int i = 0; i < N; i++) {
            posA[A[i]].push_back(i);
            posB[B[i]].push_back(i);
        }

        int ans = N;
        for (int mex = 0; mex <= N; mex++) {
            bool inA = !posA[mex].empty();
            bool inB = !posB[mex].empty();
            if (!inA && !inB) { // number missing from both
                ans = mex;
                break;
            }
            // Check if we can place mex in both arrays
            if (inA && inB) continue; // already in both
            // Only in one array
            const vector<int>& single = inA ? posA[mex] : posB[mex];
            const vector<int>& other  = inA ? posB[mex] : posA[mex];
            bool possible = false;
            for (int idx : single) {
                if ((inA && B[idx] == mex) || (!inA && A[idx] == mex)) {
                    // same number on both sides, can't transfer
                    continue;
                } else {
                    possible = true;
                    break;
                }
            }
            if (!possible) {
                ans = mex;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
