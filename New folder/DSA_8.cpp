#include<iostream>
using namespace std;
 
 int BinarySearch(int arr[], int size, int key){
    int start =0;
    int end = size -1;
    int mid = (start + end)/2;

    if(arr[mid]==key){
        return mid;
    }
    while(start<=end){
      if(key>arr[mid]){
       start = mid+1;
      }
      else{
        end=mid-1;
      }
      mid =(start+end)/2;
    }
    return -1;
 }
int main(){
int arr[]={1,2,3,4,5,6,7};
cout<<BinarySearch(arr,7,4);
   
}