// virtual base class in c++
#include<iostream>
using namespace std;
class A{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};
class B: virtual public A{

};
class C: virtual public A{

};
class D:public C, public B{

};

int main(){
    
    void say();
    
    return 0;
}

