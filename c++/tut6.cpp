 //There are two types of header files.
//1. System header file: it come from the compiler

#include<iostream>
//2. user defined hearder file: it is written by the rahul like programmer
//#include"this.h" // --> This will products an error if this .h is no prsence in  the current directory
using namespace std;
 int main()
 {
    int a=4, b=5;
    cout<< " operator in c++ :"<<endl;
    cout<<"following are the types of opeartor in c++"<<endl;
    //Arthematic opeartor
      cout<<"the value of a+b is "<<a+b<<endl;
      cout<<"the value of a-b is "<<a-b<<endl;
      cout<<"the value of a+b is "<<a*b<<endl;
      cout<<"the value of a+b is "<<a/b<<endl;
      cout<<"the value of a+b is "<<a%b<<endl;
     cout<<"the value of a+b is "<<a++<<endl;
     cout<<"the value of a+b is "<<a--<<endl;
     cout<<"the value of a+b is "<<++a<<endl;
     cout<<"the value of a+b is "<<--a<<endl;
     cout<<endl;

     // Assignment opeartor --> user to aasign values
     //int a=3, b=9;
     //char d == 'd';

     //Comparison operator
     cout<<"following are the comaprison opeartor in c++"<<endl;
     cout<<"the value of a==b is "<<(a==b)<<endl;
     cout<<"the value of a!=b is "<<(a!=b)<<endl;
     cout<<"the value of a>=b is "<<(a>=b)<<endl;
     cout<<"the value of a<=b is "<<(a<=b)<<endl;
     cout<<"the value of a>b is "<<(a>b)<<endl;
     cout<<"the value of a<b is "<<(a<b)<<endl;
     

     //Logical opeartor
     cout<<"following are the logical opeartor in c++"<<endl;
     cout<<"the value of this logical and opeartor((a==b) && (a<b)) is :"<<((a==b) && (a<b))<<endl;
     cout<<"the value of this logical or operator ((a==b) || (a<<b)) is :"<<((a==b) || (a<<b))<<endl;
     cout<<"the value of this logical not  operator (!(a==b)) is:"<<(!(a==b))<<endl;
     

    return 0;
 }