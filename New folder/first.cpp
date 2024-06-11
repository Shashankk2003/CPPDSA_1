#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the value of A:"<<endl;
cin>>a;

cout<<"Enter the value of B:"<<endl;
cin>>b;

cout<<"Enter the value of D:"<<endl;
cin>>c;

if(a>b && a>c){
    cout<<"A is the largest"<<endl;
}
else if(b>a && b>c){
    cout<<"B is the largest"<<endl;
}
else {
    cout<<"C is the largest"<<endl;
}
return 0;
}