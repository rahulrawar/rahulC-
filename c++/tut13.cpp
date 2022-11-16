 #include<iostream>
 using namespace std;
 
 int main(){
     int marks[] = {23,45,56,89};
    int mathsMarks[4];
mathsMarks[0]=2212;
mathsMarks[1]=232;
mathsMarks[2]=23;
mathsMarks[3]=2;

    cout<<marks [0]<<endl;
    cout<<marks [1]<<endl;
    cout<<marks [2]<<endl;
    cout<<marks [3]<<endl;
 
    cout<<" these are  the maths marks"<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;

    //  for (int i = 0; i < 4; i++)
    //  {
    //     cout<<"the value of marks"<<i<<"is"<<Marks[i]<<endl;
     //}   

     
    // for (int i = 0; i < 4; i++)
    // {
        // cout<<"the value of maths marks "<<i<<"is"<<mathsMarks[i]<<endl;
    // }

    // Quick quiz: do the same in while and do while  loops.................

    //do while in Array in c++..............
    // int i=0;
    // do
    // {
        // cout<<"the value of marks"<<i<<"is"<<mathsMarks[i]<<endl;
        // i++;
    // } while (i<4);

   // while in Array in c++..................
    int i =0;
    while (i <4)
    {
        cout<<"the value is marks"<<i<<"is"<<marks [i]<<endl;
        i++;
        
    }
    
    
    
    
    


    return 0;
 }