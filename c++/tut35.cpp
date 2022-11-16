// Destructor.............................
#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it returns any value
int count = 0;
class num{

    public:

    num(){
    count++;
    cout<<" this is the time when constructor is called for object number"<<count<<endl;
    }

    ~num(){
        cout<<"this is the time when the destructor is called for an object number "<<count<<endl;
        count--;
    }

};
int main(){
    cout<<"we are insider our main function"<<endl;
    cout<<" creating the first object n1"<<endl;
    num n1;
    {
        cout<<" emter this blocks"<<endl;
        cout<<"creating two more objects "<<endl;
        num n2,n3;
        cout<<" exixting the object"<<endl;
    }
    
cout<<" back to main"<<endl;
       
    return 0;
}