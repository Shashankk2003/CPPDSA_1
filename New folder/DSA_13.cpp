//Bubble Sort
#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    for(int i=size-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

/*Optimized Bubble Sort 
void bubbleSort(int arr[],int size){
  for(int i=size-1;i>=0;i--){
  int hasSwapped=0;
  for(int j=0;j<=i-1;j++){
     if(arr[j] > arr[j+1]){
       swap(arr[j], arr[j+1]);
       hasSwapped=1;
       }
     }
     if(hasSwapped==0)break;
     }
  }*/

int main(){
    int arr[] = {3, 15, 11, 8, 9, 1};
   

    bubble_sort(arr, 6);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
