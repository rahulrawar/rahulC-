// Copy constructor in c++


#include<iostream>
using namespace std;

class number{
  int a;
  public:
  number(){
    a=0;
  }
  number(int num){
    a=num;
  }

  // when no copy constructor is found , compiler 
number(number &obj){
cout<<"copy constructor called!!!!  "<<endl;
    a=obj.a;
}

  void display(){
    cout<<"the value of a is"<<a<<endl;
  }
};

int main(){
number num1,num2,num3(343);
num3.display();
num2.display();
num1.display();

number z1(num1);// copy constructor invoked 
z1.display();

//z2 = num 1; // copy constructor no invoked

 //number z2 = num1;  // copy constructor invoked
  return 0;
}