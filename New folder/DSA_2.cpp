#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,2,9,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int firstMax = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];    
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    cout << "The second largest element in the array is: " << secondMax << endl;

    return 0;
}
