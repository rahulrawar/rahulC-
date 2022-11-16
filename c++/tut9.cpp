/ #include <iostream>
// using namespace std;

// int main()
// {
//   // cout<<" this is tutorial 9";
//   int age;
//   cout << "tell me your age" << endl;
//   cin >> age;

  //***********1.Selction rule structure :If else-if else ladder
  // if ((age<18)&& (age>0))
  // {
  // cout<<" you can not to my party"<<endl;
  // }
  // else if(age==18)
  // {
  // cout<<"you are a kid ypu wil grt a kidd pass to enter the party"<<endl;
  // }
  // else if(age<1)
  // {
  // cout <<" you are to small"<<endl;
  // }
  //  else
  // {
  // cout<<" you can come to the part"<<endl;
  // }

  //**********2.Selection rule structure: switch case statement

//   switch (age)
//     {
//     case 18: 
//         cout<<"You are 18"<<endl;
//         break;
//     case 22: 
//         cout<<"You are 22"<<endl;
//         break;
//     case 2: 
//         cout<<"You are 2"<<endl;
//         break;

//     default:
//     cout<<"No special cases"<<endl;
//         break;
//     }
    
//     cout<<"done with switch case"<<endl;       

//   return 0;
// }







#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<< "enter the num"<<endl;
    cin>>num;
    
    switch (num) {
    case 1:
    {
        cout<<"one"<<endl;
        break;
    }
    
      case 2:
    {
        cout<<"two"<<endl;
        break;
    }
      case 3:
    {
        cout<<"three"<<endl;
        break;
    }
      case 4:
    {
        cout<<"four"<<endl;
        break;
    }
      case 5:
    {
        cout<<"five"<<endl;
        break;
    }
      case 6:
    {
        cout<<"six"<<endl;
        break;
    }
      case 7:
    {
        cout<<"seven"<<endl;
        break;
    }
      case 8:
    {
        cout<<"eight"<<endl;
        break;
    }
      case 9:
    {
        cout<<"nine"<<endl;
        break;
    }
    default:
    
    cout<<"greater than nine"<<endl;
    break;
    }
    cout<<"done with switch case"<<endl;
    return 0;
    }