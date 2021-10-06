/******************************************************************************

                        PARKING MANAGEMENT SYSTEM

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int r=0,b=0,c=0;
    //  r = rickshaw, b= bus , c= car
    int u_input;
    int amount=0,count=0;
    
    while(true){
    
    //menu
     
    cout<<"/*************************************/"<<endl<<endl;
    cout<<"Press 1 for rickshaw:"<<endl;
    cout<<"Press 2 for car:"<<endl;
    cout<<"Press 3 for bus:"<<endl;
    cout<<"Press 4 for see the record :"<<endl;
    cout<<"Press 5 to Delete all record :"<<endl<<endl;
    cout<<"/*************************************/"<<endl;
    cin>>u_input;
    
    //condition
    if(u_input== 1)
    {
        if(count<50){  //limit of parking is 50 Vehicles
        amount=amount+100;
        count=count+1;
        r++;
       
        }
    
    else
        {
        cout<<"Parking is Full..."<<endl;
        }
    }
    else if(u_input== 2)
    {
        if(count<50){
        amount=amount+200;
        count=count+1;
        c++;
        }
    else
        {
        cout<<"Parking is Full..."<<endl;
        }
        
    }
    else if(u_input== 3)
    {
        if(count<50){
        amount=amount+300;
        count=count+1;
        b++;
        }
    else
        {
        cout<<"Parking is Full..."<<endl;
        }
    }
    else if(u_input== 4)
    {
        cout<<"Number of rickshaw: "<<r<<endl;
        cout<<"Number of car: "<<c<<endl;
        cout<<"Number of bus: "<<b<<endl;
        cout<<"The Total Amount: "<<amount<<endl;
        cout<<"The Total Number Of Vehicles Parked: "<<count<<endl<<endl;
    }
    else if(u_input== 5)
    {
        amount=0;
        count=0;
        cout<<"/*************************************/"<<endl;
        cout<<" RECORD HAS BEEN DELETED "<<endl;
        cout<<"/*************************************/"<<endl;
    }
    else
    {
        cout<<"Invalid input...";
    }
}
    return 0;
}
