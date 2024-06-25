//selection sort
#include<iostream>
using namespace std;

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        
        if (min != i) {
            swap(arr[i], arr[min]);
        }
    }
}

int main() {
    int arr[] = {4, 5, 3, 2, 1};
    
    selection_sort(arr, 5);

   
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
