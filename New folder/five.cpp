#include<iostream>
using namespace std;

void add(float a , float b){
    cout<<"Addition of A and B "<<a+b<<endl;
}
void add(int c,int d){
    cout<<"Addition of C and D "<<c+d;
}
int main(){
 add(1.3f,1.5f);
 add(1,2);

 return 0;
}