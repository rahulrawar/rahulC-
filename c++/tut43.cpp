// Ambiguity Resolution in Inheritance in c++

#include<iostream>
using namespace std;
class base1
{
    public:
    void greet(){
        cout<<" how are you"<<endl;
    }

};

class base2{
    public:
    void greet(){
        cout<<" kaise ho ? "<<endl;
    }

};

class derived : public base1, public base2
{
    int a;
    public:
    void greet (){
        base2::greet();
    }

};


class B{
    public:
    void say(){
        cout<<"Hello world "<<endl;
    }
};

class D: public base1
{
    int a;
    public:
    void say(){
        cout<<"Hello my beautiful family "<<endl;
    }



};
int main(){
  //  Ambiguity 1
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();

    derived d;
  d.greet();  


//Ambiguity 2
B bb;
bb.say();

D dd;
dd.say();

    return 0;
}