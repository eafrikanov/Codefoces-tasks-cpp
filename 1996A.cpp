#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> Vector;
    while (t--) {
        int n;
        cin >> n;

        int max_cows = n / 4;

        int remaining_legs = n % 4;

        int num_chickens = remaining_legs / 2;

        int total_animals = max_cows + num_chickens;

        Vector.push_back(total_animals);
    }
    for (int c : Vector){
        cout << c << endl;
    }
    return 0;
}
