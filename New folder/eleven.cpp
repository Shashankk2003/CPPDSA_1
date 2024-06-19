#include<iostream>
using namespace std;

class employee{
   public:
   void salary(){
    
   }
};
class perment : public employee{
   void salary(){
    cout<<"perment salary 100000"<<endl;
   }
};

class contractual : public employee{
   void salary(){
    cout<<"contractual salary 50000"<<endl;
   }
};

int main(){
   employee *p;   
   perment t;
   
   return 0;
}