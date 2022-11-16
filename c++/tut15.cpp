#include<iostream>
using namespace std;

// fuction protype

// int sum(int a,int b); ..........acceptable
// int sum(int a,b);...............not accetable
int sum(int,int);//accetable
//void g(void);//accetable
void g();//....accetable

int main(){
    int num1,num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    //num1 and num2 is a actual parameters
    cout<<"the sum is"<<sum(num1,num2)<<endl;
    g();

    return 0;
}

int sum(int a,int b){
    // Formal parameters a and b will be taking value form actual parameters num1 and num2.    
    int c =a+b;
    return c;

}
void g(){
    cout<<" hello good morning"<<endl;
}