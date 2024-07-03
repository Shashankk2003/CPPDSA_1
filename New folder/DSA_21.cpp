#include <iostream>
using namespace std;

int sum(int arr[][4], int row, int col) {
    int add = 0;
    for (int r=0;r<3;r++) {
        for (int c=0;c<4;c++) {
            add += arr[r][c];
        }
    }
    return add;
}



int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    cout<<"Sum of all elements in the array: " << sum(arr, 3, 4) << endl;

    return 0;
}