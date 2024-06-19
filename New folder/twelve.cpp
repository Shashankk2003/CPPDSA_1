#include<iostream>
using namespace std;

template<class T>
class add{
    private:
    T a,b;

    public:
     add(T a,T b){
        this->a=a;
        this->b=b;
    }
    T sum(){
        return a+b;
    }
};
int main(){
    add<int> obj(10,20);
    cout<<obj.sum()<<endl;
    return 0;
}