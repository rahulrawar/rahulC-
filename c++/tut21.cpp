#include <iostream>
using namespace std;

class employe
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b2, int c3);//declaration
    void getData()
    {
        cout << " the value of a is" << a << endl;
        cout << " the value of b is" << b << endl;
        cout << " the value of c is" << c << endl;
        cout << " the value of d is" << d << endl;
        cout << " the value of e is" << e << endl;
    }
};

void employe::setData(int a1, int b2, int c3){
a = a1;
b = b2;
c = c3;
}

int main()
{
employe harry;
//harry.a=223; -----> This will throw error beacuse as a is private
harry.d=23;
harry.e=243;
harry.setData(1,2,4);
harry.getData();

    return 0;
}