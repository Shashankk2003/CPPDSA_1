#include<iostream>
using namespace std;

class Person{
   public:
   int a;
   string n;
   Person(string name, int age){
    n= name;
    a = age;
   }
   void display(){
    cout<<"Name: "<<n<<endl;
    cout<<"Age: "<<a<<endl;
   }
};
int main(){
    Person p1("Raj", 20);
    p1.display();
    return 0;
}