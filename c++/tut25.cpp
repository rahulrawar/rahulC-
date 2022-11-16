#include<iostream>
using namespace std;

class employe
{
    int id;
    int salary;

    public:
    
    void setid(void)
    {
        salary = 122;
        cout<<" enter the employe id"<<endl;
        cin>>id;
    }

    void getid(void)
    {
        cout<<" the employe id is"<<id<<endl;
    }


};

int main(){
employe fb[1000];
for (int i = 0; i < 10000; i++)
{
    fb[i].setid() ;
    fb[i].getid() ;
}

    
    return 0;
}