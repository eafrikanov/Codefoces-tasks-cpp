#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> nameCount;
    string name;

    for (int i = 0; i < n; ++i) {
        cin >> name;

        if (nameCount[name] == 0) {
            cout << "OK" << endl;
            nameCount[name] = 1;
        } else {
            int suffix = nameCount[name];
            string newName;

            do {
                newName = name + to_string(suffix);
                ++suffix;
            } while (nameCount[newName] != 0);

            cout << newName << endl;
            nameCount[newName] = 1;
            nameCount[name] = suffix;
        }
    }

    return 0;
}
