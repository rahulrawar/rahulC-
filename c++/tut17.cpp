#include<iostream>
using namespace std;

 inline int product(int a, int b){
    return a*b;
}

float moneyrecieved( int currentmoney , float factor=1.04){
    return currentmoney  * factor;
}

int strlen( const char *p){
    
}

int main(){
// int a,b;
// cout<<"enter the value of a and b"<<endl;
// cin>>a>>b;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;
// cout<<" the product of a and b is "<<product(a,b)<<endl;

int money = 10000;
cout<<"if you have"<<money<<"rs in you bank account , you will recieve"<<moneyrecieved(money)<< " rs after in one year"<<endl;
cout<<" for vip :if you have"<<money<<"rs in you bank account , you will recieve"<<moneyrecieved(money , 1.1)<< " rs after in one year"<<endl;

    return 0;
}