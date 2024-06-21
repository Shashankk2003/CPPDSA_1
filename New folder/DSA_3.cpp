#include<iostream>
#include <iostream>
using namespace std;

void sort0and1(int arr[], int size) {
    int count_0 = 0; 
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            count_0++;
        }
    }

    for (int i = 0; i < size; ++i) {
        if (i < count_0) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }
}

int main() {
    int arr[5] = {1, 0, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort0and1(arr, size);

   
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
