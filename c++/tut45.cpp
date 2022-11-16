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
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics = m2;

    }

    void get_marks(){
        cout<<"your result is here:"<<endl
        << "maths "<<maths<<endl
        <<"physics "<<physics<<endl;
    }
};

class sports :virtual public student{
    protected:
    float score;
    public :
    void set_score(float sc){
        score=sc;
    }
    void get_score(){
        cout<<"your PT score is "<<score<<endl;
    }
};

class result: public sports,public test{
    protected:
    float total;
public:
void display(){
    total =maths+physics+score;
    get_number();
    get_marks();
    get_score();
    cout<< " your total  score is "<<total<<endl;
}
};


int main(){
    result rahul;
     rahul.set_number(23);
     rahul.set_marks(32.32,34.7);
    rahul.set_score(7);
    rahul.display();

    
    return 0;
}