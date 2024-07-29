#include <iostream>
using namespace std;

void too_long(string str) {
    if (str.length() > 10){
        cout << str[0] << str.length() - 2 << str[str.length()-1] << "\n";
    }
    else cout << str << "\n";
}
int main() {
    int range;
    cin >> range;
    for (; range > 0; range-=1){
        string word;
        cin >> word;
        too_long(word);

    }
    return 0;
}
