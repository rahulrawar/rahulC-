// code example Demonstrating
// Virtual Base  class in base in c++

#include<iostream>
using namespace std;

class student{
    int roll_no;
    public:
    void set_number(int a){
        roll_no='a';
    }
        void get_number(void){
            cout<<" your roll no is "<<roll_no<<endl;

        }
};

class test: virtual public student {
    protected:
    float maths , physics;
    void set_marks(float m1,float m2){
        maths=m1;
        physics = m2;

    }

    void get_marks(){
        cout<<"your result is here:"<<endl
        << "maths"<<maths<<endl
        <<"physicd"<<physics<<endl;
    }
};

class sports :virtual public student{
    protected:
    float score;