#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int multiply(int a, int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
int main() 
{
    int a=0,b=0;   
     int choice;
    cout<<"enter 2 numbers : "<<endl;
cin>>a>>b;
cout<<"1. addition\n"<<"2.substraction\n"<<"3.division\n"<<"4. multiplication"<<endl;
cout<<"enter operation : "<<endl;
cin>>choice;

    switch(choice)
    {
    case 1 :
    cout<<add(a,b)<<endl;
       break;
       case 2:
       cout<<sub(a,b)<<endl;
       break;
       case 3:
       cout<<divide(a,b)<<endl;
       break;
       case 4:
       cout<<multiply(a,b)<<endl;
       break;
       default:
       cout<<"invalid";
       break;
    }
return 0;

}