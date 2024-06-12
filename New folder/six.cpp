#include<iostream>
using namespace std;

class Student{
    public:
    int age,roll_no;
    string name,course;
    void info(){
      cout<<"Enter name of the student"<<endl;
      cin>>name;
      cout<<"Enter age of the student"<<endl;
      cin>>age;
      cout<<"Enter roll no of the student"<<endl;
      cin>>roll_no;
      cout<<"Enter course of the student"<<endl;
      cin>>course;
}
void display(){
    cout<<"Student Information"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Roll No: "<<roll_no<<endl;
    cout<<"Course: "<<course<<endl;
}
};

int main(){
   Student obj;
   obj.info();
   obj.display();
}