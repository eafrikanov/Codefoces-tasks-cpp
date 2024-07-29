#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> pref_a(n + 1, vector<int>(26, 0));
        vector<vector<int>> pref_b(n + 1, vector<int>(26, 0));

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < 26; ++j) {
                pref_a[i][j] = pref_a[i - 1][j];
                pref_b[i][j] = pref_b[i - 1][j];
            }
            pref_a[i][a[i - 1] - 'a']++;
            pref_b[i][b[i - 1] - 'a']++;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--;

            int same = 0;
            for (int i = 0; i < 26; ++i) {
                int freq_a = pref_a[r][i] - pref_a[l][i];
                int freq_b = pref_b[r][i] - pref_b[l][i];
                same += min(freq_a, freq_b);
            }

            cout << (r - l) - same << endl;
        }
    }
    return 0;
}
