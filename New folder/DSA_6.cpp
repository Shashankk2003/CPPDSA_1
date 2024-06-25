#include<iostream>
// #include<set>
using namespace std;

// int main(){
//   set<int> set1={1,1,2,2,2,3,3};
//   for(int i:set1){
//     cout<<i<<" ";
//   }
// cout<<"\nSize :"<<set1.size();
// }                                 

int uniqueElements(int arr[], int size){
    int i=0;
    for(int j = i+1; j<size; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    
}
int main(){
    int arr[]={1,1,2,2,2,3,3};
    int k = uniqueElements(arr,7);
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}