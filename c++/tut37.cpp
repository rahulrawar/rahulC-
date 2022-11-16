#include <iostream>

using namespace std;

// Base class
class employee
{
   // int 12;
    

public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;

        salary = 32.0;
    }
    employee() {}
};

// Derived class syntax
/*class {{ derived-class-name}} : {{visibility-mode}}{{base-class-name}}
{
    class memebers/methods/etc....
}*/

// Notr:
// Default visibility mode is private

// creating a programmer drived from employee base class

class programer : public employee
{

public:
    programer(int inpId)
    {
        id = inpId;
    }
    int languagecode = 11;

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rahul(21), rohit();
    cout << harry.salary << endl;

    programer skillf(1);
    cout << skillf.languagecode << endl;
    cout << skillf.id << endl;
    skillf.getdata();

    return 0;
}
