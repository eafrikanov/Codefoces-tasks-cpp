#include <iostream>
#include <vector>

using namespace std;

int main (){
    int chet = 0;
    int nechet = 0;
    int quantity;
    int num;
    int chet_num;
    int nechet_num;
    cin >> quantity;

    vector<int> Nums;

    for (int i = 0; i != quantity; i ++){
        cin >> num;
        Nums.push_back(num);
    }

    for (int c : Nums){
        if (c % 2 == 0){
            chet += 1;
            chet_num = c;
        } else {
            nechet_num = c;
            nechet +=1;
        }
    }
    if (chet == 1) {
        int target = chet_num;

        int index = -1;
        for (auto it = Nums.begin(); it != Nums.end(); ++it) {
            if (*it == target) {
                index = distance(Nums.begin(), it);
                break;
            }
        }

        cout << index + 1;

    }else  {
        int target = nechet_num;

        int index = -1;
        for (auto it = Nums.begin(); it != Nums.end(); ++it) {
            if (*it == target) {
                index = distance(Nums.begin(), it);
                break;
            }
        }

        cout << index + 1;
    }

    return 0;

}