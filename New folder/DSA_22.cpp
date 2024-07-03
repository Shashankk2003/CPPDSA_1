#include<iostream>
using namespace std;
int rowsum(int arr[][4],int row, int col){
    int max= INT_MIN;
    int rowIndex=-1;

    for(int row=0; row<3; row++){
        int sum =0;
        for(int col=0; col<3;col++){
            sum += arr[row][col];
        }
        if(sum>max){
            max =sum;
            rowIndex = row;
        }
    }
    cout<<"Maxmium sum is "<<max<<endl;
    return rowIndex;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<rowsum(arr,3,4);
    return 0;
}