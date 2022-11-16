#include<iostream>
using namespace std;

int main(){
    // what is pointer ?----> Data type which hold the adress of data  types
    int a=3;
    int *b;
    b=&a;

    // & -----> (Address of ) operator
    cout<<"the value of a is"<<b<<endl;
    cout<<"the value of a is"<<&a<<endl;

    // *--------->(value of) Dereference operator
    cout<<" the value of b is"<<*b<<endl;
 
 // pointer to pointer
//  int** c=&b;
//  cout<<"the address of b is"<<&b<<endl;
//  cout<<"the address of b is"<<c<<endl;
//  cout<<"the value at address of c is"<<*c<<endl;
//  cout<<"the value at address value_at(value_at(c))  is"<<**c<<endl;
//     return 0;
}
