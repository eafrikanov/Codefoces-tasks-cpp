#include <iostream>
using namespace std;


int main() {
    int range;
    cin >> range;
    int result = 0;
    for (; range > 0; range--){
        int v1, v2, v3;
        cin >> v1;
        cin >> v2;
        cin >> v3;
        if (v1 + v2 + v3 > 1){
            result += 1;
        }
    }
    cout << result;

    return 0;
}
