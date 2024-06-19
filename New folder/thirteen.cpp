#include <iostream>
using namespace std;

int getmin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5] = {5, 9, 15, 6, 3};

    int minimum = getmin(arr, 5); 
    cout << "Minimum element in the array: " << minimum << endl;

    return 0;
}
