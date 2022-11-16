// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions................................................

#include<iostream>
using namespace std;

class binary
{
    private:
    string s;
    void chk_binary();

    public:
    void read();
    // void chk_binary();
    void ones_compliment();
    void display_binary();
};
 void binary:: read(void){
    cout<<"enter the binary number"<<endl;
    cin>>s;
 }

  void binary:: chk_binary()
  {
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) !='0' && s.at(i) !='1')
        {
            cout<<" incorrect biary format"<<endl;
            exit(0);
        }   
    }

  }

  void binary:: ones_compliment()
  {
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) =='0')
        {
            s.at(i) ='1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }
    
    
  }

  void binary:: display_binary()
{
  cout<<"displaying the binary no"<<endl;  
  for (int i = 0; i < s.length(); i++)
  {
    cout<<s.at(i);
  }
cout<<endl;
  
}

  
int main(){
    binary b;
    b.read();
    //b.chk_binary();
    b.ones_compliment();
    b.display_binary();
    
    return 0;
}
