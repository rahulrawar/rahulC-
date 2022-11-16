#include <iostream>
using namespace std;

struct employe
{
    int eid;
    char favchar;
    float salary;
};
union money
{
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    // enum Meal{breakfast, lunch,dinner} ;
    // Meal m1 = dinner;
    // cout << m1<<endl;
    //  cout<<breakfast<<endl;
    //  cout<<lunch<<endl;
    //  cout<<dinner<<endl;

     union money m1;
     m1.rice =34;
     m1.car = 'e';
     cout<<m1.rice<<endl;
     //cout<<m1.car<<endl;
     

    // struct employe harry;
    // struct employe rohandas;
    // struct employe shubham;
    // harry.eid= 1;
    // harry.favchar= 'c';
    // harry.salary= 1200000000;
    // cout<< "the value of "<<harry.eid<<endl;
    // cout<<" the value of "<<harry.favchar<<endl;
    // cout<<" thr vale of  " <<harry.salary<<endl;
    //
    // rohandas.eid= 2;
    // rohandas.favchar= 'y';
    // rohandas.salary= 200000000;
    // cout<< "the value of "<<rohandas.eid<<endl;
    // cout<<" the value of "<<rohandas.favchar<<endl;
    // cout<<" thr vale of  " <<rohandas.salary<<endl;
    //
    // shubham.eid= 3;
    // shubham.favchar= 'x';
    // shubham.salary= 300000000;
    // cout<< "the value of "<<shubham.eid<<endl;
    // cout<<" the value of "<<shubham.favchar<<endl;
    // cout<<" thr vale of  " <<shubham.salary<<endl;
    //

    return 0;
};
  