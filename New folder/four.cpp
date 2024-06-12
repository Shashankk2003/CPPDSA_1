#include<iostream>
using namespace std;

int main(){
    int n,fact=1,r;
    cout<<"enter value of n"<<endl;
    cin>>n;
    cout<<"Enter value of r"<<endl;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of number is: "<<fact<<endl;
    return 0;
}