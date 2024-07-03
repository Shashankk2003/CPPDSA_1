//Wave print
#include<iostream>
using namespace std;

void waveprint(int arr[][4], int col, int row){
   
       for(int col=0; col<4;col++){
        if(col%2==1){
            for(row=row-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row =0; row<3; row++){
                cout<<arr[row][col]<<" ";
            }
        }
       }
    }


int main(){
 int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   waveprint(arr,3,4);

   return 0;
}