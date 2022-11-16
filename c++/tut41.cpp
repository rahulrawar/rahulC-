// Multiple inheritance deep dive with code ex in c++

#include<iostream>
using namespace std;

// classs Derivedic : visibility -mode base1, visibility -mode base2
// {
//  class body of class "DerivedC"
// }

class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int = a;

    }

};

class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int =a;
    }

};

class derived: public base1,public base2
{
    public:
    void show (){
        cout<<" thr value of base 1 is "<<base1int<<endl;
        cout<<" thr value of base 2 is "<<base2int<<endl;
        cout<<" thr value of  these value is "<<base1int+base2int<<endl;
        

    }

};


int main(){
    derived harry;
    harry.set_base1int(32);
    harry.set_base2int(32);
    harry.show();    
    return 0;
}