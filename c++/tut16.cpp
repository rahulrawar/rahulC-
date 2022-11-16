#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// this will not swap a and b
void swap(int a, int b)
{                 // temp a  b
    int temp = a; //  4   4  5
    a = b;        //  4   5  5
    b = temp;     //  4   5  4
}

// call by refernce using pointer
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by refernce using c++ refernce variables
// int &
void swapReferncevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main()
{
    int x = 4, y = 5;
    // cout<< " the sum of 4 and 5 is  "<<sum(4,5)<<endl;
    cout << " the value of x is" << x << "and the value of y is" << y << endl;
    // swap(x,y);
    // swappointer(&x, &y);
    swapReferncevar(x, y);
    // swapReferncevar(x,y)= 766;
    cout << " the value of x is" << x << "and the value of y is" << y << endl;

    return 0;
}