#include <iostream>
#include <vector>

using namespace std;

int main(){
    string str;
    cin >> str;
    int a, b= 0;
    int qq = 0;
    int caps_letters= 0;
    int lower_letters = 0;
    vector<char> Letters;
    vector<char> Up;
    vector<char> Low;
    for (char i : str){
        Letters.push_back(i);
    }
    for (char h : Letters){
        if (isupper(h) == true){
            caps_letters ++;
        } else lower_letters ++;
    }
    if (caps_letters == Letters.size() - 1){
        a ++;
        if (isupper(Letters[0]) == false){
            Up.push_back(toupper(Letters[0]));
        }
        for (char j : Letters){
            if (j == Letters[0]){
                continue;
            }
            Up.push_back(tolower(j));
        }
    }
    if (lower_letters == Letters.size() - 1){
        b ++;
        if (islower(Letters[0]) == false){
            Low.push_back(tolower(Letters[0]));
        }
        for (char j : Letters){
            Low.push_back(toupper(j));
    }
    }

    if (a > b){
        for (char k : Up) {
            for (char g: str) {
                if (k == g){
                    qq ++;
                }
            }
        }
        if (qq == Up.size()){
            for (char y : str){
                cout << y;
                break;
        }
        for (char c : Up){
            cout << c;
        }
    } else if (a < b) {
        for (char k: Low) {
            cout << k;
        }
    }

}
    return 0;
}