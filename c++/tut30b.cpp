#include<iostream>
using namespace std;

class point{

    int x ,y;
    public:
    point(int a , int b)
    {
    x=a;
    y=b;
    }

    void display(){
        cout<<" the point is("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    point p(2,3);
    p.display();
    
    point q(6,5);
    q.display();

    
    return 0;
}