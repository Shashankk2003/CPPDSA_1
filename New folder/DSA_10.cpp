#include<iostream>
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

int value(int arr[], int size, int key){
int start = 0;
    int end = size - 1;
    int result = -1;
    int ans;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (ans <= key) {
            result = ans;
           
        } else {
            end = mid - 1;
        }
    }
    
    return result;
}


int main() {
    int arr[] = {1, 3,4,5,6,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    
    value(arr,size,key);
    return 0;
}



