#include<iostream> 
using namespace std;
 void inputbalance(int balance[],int size)
  {
int i;
for(i=0;i<size;i++)
{
cin>>balance[i];
 }
  }
 void displaybalance(int balance[],int size)
{
int i;
for(i=0;i<size;i++)
{
 cout<<"customer balance"<<i+1<<":"<<balance[i]<<endl;
  }
  }
    int highest(int balance[],int size)
    {
int largest=balance[0],i;
for(i=1;i<size;i++)
{
if(largest<balance[i])
 {
 largest=balance[i];
   }
    }
return largest;
 }
int lowest(int balance[],int size)
{ int small=balance[0],i; for(i=1;i<size;i++)
 {
 if(small>balance[i])
 {
  small=balance[i];
 }
}
return small; 
 }
int totalMoney(int balance[], int size)
{
int total=0,i;
 {
for(i=0;i<size;i++)
 {
 total=total+balance[i];
 }
 }
 cout<<"total : "<<total<<endl;
return total;
 }
float averageBalance(int balance[], int size)
{
    int total = totalMoney(balance, size);
    return (float)total / size;
}
int main()
 {
 int size;
cout<<"enter your size ";
 cin>>size;
int balance[size];
int i;
 cout<<"enter numbers : "<<endl;
 inputbalance(balance,size);
displaybalance(balance,size);
 cout<<"highest value : " << highest(balance,size)<<endl;
 cout<<"lowest value : "<< lowest(balance,size)<<endl;
 cout<<"total amount: "<<totalMoney(balance,size)<<endl;
  cout<<"avg value : "<<averageBalance(balance,size);                                                                                        
return 0; 
}
