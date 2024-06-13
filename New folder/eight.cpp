#include<iostream>
using namespace std;

class Student{
 private:
    string Name;
    char Grade;
    int Age,Rollnumber;
public:
    void input(){
        string getName();
        int getRollnumber();
        int getAge();
        char getGrade();
    }
    void display(){
        void setName(string newName);
        void setRollnumber(int newRollnumber);
        void setAge(int newAge);
        void setGrade(char newGrade);
    }
};

int main(){
   
}