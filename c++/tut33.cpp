// Dynamic intialization 0f objects using constructors.....................
#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    float interestRate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r); // r can be value like 0.
    Bankdeposit(int p, int y, int r);   // r can be value like 12
    void show();
};

Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);

    }
}

Bankdeposit::Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}

void Bankdeposit ::show()
{
    cout << endl<< "principal amount is" << principal << "return value after " << years << " years is" << returnvalue << endl;
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p;
    int y;
    float r;
    float R;

    cout << "enter the valur of p , y and r" << endl;
    cin >> p >> y >> r;
    bd1=Bankdeposit(p,y,r);
    bd1.show();

    cout << "enter the valur of p , y and R" << endl;
    cin >> p >> y >> R;
    bd2=Bankdeposit(p,y,R);
    bd2.show();
    return 0;
}