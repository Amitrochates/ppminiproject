#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

class bank
{   char name[100], add[100],t;
    int balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
        

};
void bank::open_account()
{
    cout<<"enter name\n";
    cin.ignore();
    cin.getline(name,100);

    cout<<"enter address\n";
    cin.ignore();
    cin.getline(add,100);

    cout<<"account type saving (s) or current (c)\n";
    cin>>t;

    cout<<"deposit amount ";
    cin>>balance;
    cout<<"account created";


}
    void bank::deposit_money()
    {   int amount;
        cout<<"enetr amount to deposit\n";
        cin>>amount;
        balance=amount;
        //balance+=amount;
        cout<<"total balance\n"<<balance;
        

    }
void bank::display_account()
{
    cout<<"Name:"<<name<<"\n";
    cout<<"Address:"<<add<<"\n";
    cout<<"account type"<<t<<"\n";
    cout<<"Balance:"<<balance<<"\n";
}
void bank::withdraw_money()
{   
    float amount = 0;

    cout<<"current balance"<<balance<<"\n";
    while (amount<balance)
    {
    cout<<"enter withdrawal amount:";
    cin>>amount;
    balance-=amount;
    }
    cout<<"balance is"<<balance<<"\n";

}


int main()
{   
   
    int menu,x;
    bank obj;
    do{
    cout<<"1. open account\n";
    cout<<"2. deposit money\n";
    cout<<"3. withdraw money\n";
    cout<<"4. display account\n";
    cout<<"5. Exit\n";
    cout<<"choose an option ";
    cin>>menu;
    switch (menu)
    {
    case 1: 
    obj.open_account();
    break;
    case 2: 
    obj.deposit_money();
    break;
    case 3: 
    obj.withdraw_money();
    break;
    case 4: 
    obj.display_account();
    break;
    case 5: exit (1);
    break;
    default:
     cout<<"enter suitable number\n";   
    }
    
    cout<<"\n if you want to select an option press :: 1\n";
    cout<<"if you want to exit press::0 ";
    cin>>x;
    if(x==2)
    exit(0);
    } while (x==1);
   
}



