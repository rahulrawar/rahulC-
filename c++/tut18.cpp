#include<iostream>
using namespace std;

int factorial (int n){
    if(n<2){
        return 1;
    }

    return n * factorial(n-1);
}

// step by step calculation of factorial
//factorial(4) = 4 * factorial (3)  
//factorial(4) = 4 * 3 * factorial(2)
//factorial(4) = 4 * 3 * 2 * factorial (1)
//factorial(4) = 4 * 3 * 2 * 1;
//factorial(4) = 24; 

int fib( int n){
    if (n<=2)
    {
        return 1;
    }
    
    return fib(n-2)+fib(n-1);
    }
    // fib(5)
    // fib(4)+fib(3)
    // fib(2)+fib(3)+fib(2)fib(3)

int main(){
    int a;
    cout<<"enter the number"<<endl;
     cin>>a;
    // cout<< " enter the no "<<a<<"is"<<factorial(a)<<endl;
    cout<<" enter the fibonacci sequence at position"<<a<<"is"<<fib(a)<<endl;
  

    
    return 0;
}