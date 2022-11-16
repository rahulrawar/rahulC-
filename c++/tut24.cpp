#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << " enter the id" << endl;
        cin >> id;
       count++;
    }
    void getdata(void)
    {
        cout << " the id of this employee is  " << id<< "and this employee is number  " << count << endl;
    }

    static void getcount(void)
    {
        cout << " the value of count is" << count << endl;
    }
};

    int employee::count; // Default value is 0

    int main()
    {
        employee harry, shubham, rahul;

        harry.setdata();
        harry.getdata();
        employee::getcount();

        shubham.setdata();
        shubham.getdata();
        employee::getcount();

        rahul.setdata();
        rahul.getdata();
        employee::getcount();

        return 0;

    }