#include <iostream>
using namespace std;

int FindFirstOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            result = mid;
            end = mid - 1; 
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return result;
}

int FindLastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int result = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] <= key) {
            result = mid;
            start = mid + 1; 
        } else {
            end = mid - 1;
        }
    }
    
    return result;
}

int CountOccurrences(int arr[], int size, int key) {
    int firstOccurrence = FindFirstOccurrence(arr, size, key);
    int lastOccurrence = FindLastOccurrence(arr, size, key);
    
    if (firstOccurrence == -1) {
        return 0; 
    } else {
        return lastOccurrence - firstOccurrence + 1;
    }
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 4, 4, 5, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    
    int occurrences = CountOccurrences(arr, size, key);
    
    cout << "Total occurrences of " << key << " in the array: " << occurrences << endl;

    return 0;
}



