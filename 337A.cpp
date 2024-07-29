#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> fragments(m);
    for (int i = 0; i < m; ++i) {
        cin >> fragments[i];
    }

    sort(fragments.begin(), fragments.end());

    int min_diff = fragments[n - 1] - fragments[0];
    for (int i = 1; i <= m - n; ++i) {
        int diff = fragments[i + n - 1] - fragments[i];
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;

    return 0;
}