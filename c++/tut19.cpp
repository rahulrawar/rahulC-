#include<iostream>
using namespace std;

int sum( int a ,int b){
    cout<<" using fuction with 2 aruguments"<<endl;
    return( a + b);
}
int sum( int a , int b ,int c){
   
cout<<" using fuction with 3aruguments"<<endl;
    return (a+b+c);
}

// volume of cylinder
int volume(double r , int h){
    return ( 3.14 * r*r*h);
}

//volume of cube
int volume(int a){
    return ( a*a*a);
}

//volume of cuboid(rectangle box)
int volume(int l, int b , int h){
    return ( l*b*h);
}

int main(){
    cout<<" the value of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<" the value of 3 ,7 and 4 is "<<sum(3,7,4)<<endl;
    cout<<" the volume of cylinder is 3 and 7 is "<<volume(3,7)<<endl;
    cout<<" the volume of cube is is 12 "<<volume(12)<<endl;
    cout<<" the volume of cuboid is 3 , 7 and 4 "<<volume(3,7,4)<<endl;
    
    
    
    

    
    return 0;
}