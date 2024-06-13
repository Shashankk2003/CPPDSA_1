#include<iostream>
using namespace std;

int main()
{
    int var =10;
    int *ptr;
    ptr = &var;
    int **ptr2= &ptr;

    cout<<var<<endl;
    cout<<&ptr<<endl;
    cout<<&ptr2<<endl;
    return 0;
}