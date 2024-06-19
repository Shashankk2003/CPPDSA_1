#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] == key) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int arr[] = { 2, 3, 5, 7, 11, 13, 17, 19 };
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 18; 

    
    if (linearSearch(arr, n, key)) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
