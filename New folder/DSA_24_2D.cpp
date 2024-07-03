#include<iostream>
using namespace std;
void spiralPrint(int arr[][3], int row, int col){
    int topRow= 0;
    int bottomRow= row-1;
    int leftcol= 0;
    int rightcol= col-1;

    while(topRow <= bottomRow && leftcol <= rightcol){
        for(int i = leftcol; i<= rightcol; i++){
            cout<<arr[topRow][i]<<" ";
        }
        topRow++;

        for(int i=topRow;i<=bottomRow;i++){
            cout<<arr[i][rightcol]<<" ";

        }
        rightcol--;

        for(int i=rightcol; i<=leftcol;i--){
            cout<<arr[bottomRow][i]<<" ";
        }

        for(int i= bottomRow; i>= topRow; i--){
            cout<<arr[i]
        }
    }
}

int main(){
 int arr[][]={};
}