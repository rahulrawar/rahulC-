#include<iostream>
using namespace std;
 
class shop
{
    private:
    int itemId[100];
    int itemprice[100];
    int counter;

    public:
    void initcounter(void){ counter=0;}
    void setprice(void);
    void displayprice(void);
};

void shop :: setprice(void)
{
    cout<<"enter the id of your no"<< counter +1 << endl;
    cin>> itemId[counter];
    cout<<" enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
    
}

void shop :: displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<" the price of item with id "<< itemId[i] <<"is" <<itemprice[i]<<endl;
    }
    
}


int main(){
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    

    return 0;
}