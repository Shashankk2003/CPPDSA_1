#include<iostream>
#include<cstring>
using namespace std;

int getlenght(char item[]){
    int count=0;
    for(int i=0; item[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char str[100];
   
    cout<<"Enter your name:"<<endl;

    cin.getline(str,100);
    
    cout<<"lenght of character is "<<getlenght(str)<<endl;
     

}
