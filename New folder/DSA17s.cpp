#include <iostream>
using namespace std;

int main() {
    string str = "Hello My name is Shahsank";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str.replace(i, 1, "@9");
        }
    }
    cout << "Modified string: " << str << endl;

    return 0;
}