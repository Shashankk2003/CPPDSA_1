#include<iostream>
using namespace std;

int main(){
     
    int sub1,sub2,sub3;
    string name;
    cout<<"Enter Your name:"<<endl;
    cin>>name;
     cout<<"Enter the marks of Subject 1:"<<endl;
     cin>>sub1;
     cout<<"Enter the marks of Subject 2:"<<endl;
     cin>>sub2;
     cout<<"Enter the marks of Subject 3:"<<endl;
     cin>>sub3;
     int total = sub1+sub2+sub3;
     float per = total/3;

     if(per>60){
        cout<<"Cogratulations "<<name<<endl;
        cout<<"You have passed the exam"<<endl;
        cout<<"Total Marks:"<<total<<endl;
        cout<<"Your percentage is:"<<per<<"%"<<endl;
        }
     else {
        cout<<"Sorry "<<name<<endl;
        cout<<"You have failed the exam"<<endl;
        cout<<"Total Marks:"<<total<<endl;
        cout<<"Your percentage is:"<<per<<"%"<<endl;
   
     }
     return 0;
}