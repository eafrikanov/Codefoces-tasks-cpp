#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int k;
    int res = 0;

    cin >> n >> k;
    k --;

    vector<int> Vector;
    for (int i = 0; i != n; i ++){
        int c;
        cin >> c;
        Vector.push_back(c);

    }
    for (int j : Vector){
        if (j >= Vector[k] and j != 0){
            res ++;
        }
    }
    cout << res;
    return 0;
}
