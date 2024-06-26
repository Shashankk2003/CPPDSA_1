#include <iostream>

using namespace std;

int main() {
    
    for (int i = 0; i <= 255; ++i) {
       
        cout << "Character: " << static_cast<char>(i) << "\t ASCII Value: " << i << endl;
    }
    
    return 0;
}