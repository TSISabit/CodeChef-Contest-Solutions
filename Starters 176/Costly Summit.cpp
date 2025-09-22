#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }

    int total_people = n;
    int unique_lang_count = freq.size();

    // Case 1: If all people speak the same language, translation is not needed
    if (unique_lang_count == 1) {
        cout << (n * (n - 1)) / 2 << endl;
        return;
    }

    // Case 2: Using translators only
    int translator_cost = (total_people * (total_people - 1)) / 2;

    // Case 3: Learning a language and translating the rest
    int min_cost = INT_MAX;
    for (auto &pair : freq) {
        char lang = pair.first;
        int speakers = pair.second;

        int learn_cost = c;
        int remaining_people = total_people - speakers;
        int translator_cost_for_remaining = (remaining_people * (remaining_people + 1)) / 2;

        min_cost = min(min_cost, learn_cost + translator_cost_for_remaining);
    }

    // Print the minimum cost from all options
    cout << min(min_cost, translator_cost) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
