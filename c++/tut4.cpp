#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;
}

int main(){
    int glo = 9;
    glo =78;
    
    int a = 1; int b =3;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    // cout<<"this is a tutorial 4.\nhere the value of a is "<<a<<".\n the value of b is "<< b;
    // cout<<"the value of a is"<<pi;
    // cout<<"the value of a is"<<c;
    return 0;
}