#include<iostream>
using namespace std;
int main ()
{
    int balance=1000;
    int amount;
    int choice;
    cout <<"MENU"<<endl;
    cout<<"enter 1. check balance"<<endl;
    cout<<"enter 2. deposit "<<endl;
    cout<<"enter 3. withdraw "<<endl;
    cout<<"enter 4. exit "<<endl;
    cout<<"enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
           cout<<"balance : "<<balance<<endl;
           cout<<"thank you ";
           break;
        case 2 :
           cout<<"enter amount : ";
           cin>>amount;
           if (amount<=0)
           {
            cout<<"invalid output";
           break;
           }
           else
           {
            int previous_balance= balance;
            cout<<"previous balance = "<<previous_balance<<endl;
        balance=balance+amount;
        cout<<"deposit amount : "<<amount<<endl;
        cout<<"current balance : "<<balance<<endl;
        cout<<"thank you ";
           break;
           }
        case 3 :
           cout<<"enter amount to withdraw : ";
           cin>>amount;
           if(amount>balance)
           {
            cout<<"insufficient amount";
            break;
           }
           else if(amount<=0)
           {
            cout<<"invalid amount";
            break;
           }
        else
        {
         int previous_balance= balance;
            balance=balance-amount;
            cout<<"previous balance = "<<previous_balance<<endl;
            cout<< "withdraw amount = "<<amount<<endl;
            cout<< "current balance = "<< balance<<endl;
            cout<<"thank you"; 
            break;
        }
        case 4 :
           cout<<" exit "<<endl;
           cout<<"thank you ";
           break;
        default:
        cout<<"invalid choice";
    }
return 0;
}