#include <iostream>
using namespace std;
// forward declartion..........

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    //Aliter : declaring for entire calculator class as a friend
 friend class calculator;
public:
// individually declaring functions as a friends
    // friend int calculator ::sumrealcomplex(complex o1, complex o2);
    // friend int calculator ::sumcompcomplex(complex o1, complex o2);
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << " the complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(2, 3);
    o1.printnumber();
    o2.setnumber(3, 3);
    o2.printnumber();
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << " the sum of real part of o1 and o2 is" << res << endl;

    int resc = calc.sumrealcomplex(o1, o2);
    cout << " the complex of  complex part of o1 and o2 is" << resc << endl;
}
