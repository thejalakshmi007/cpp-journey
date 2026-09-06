#include<iostream>
using namespace std;
int main ()
{
int a,b;
char op;
cout<<"Enter expression (example: 5 + 3):";
cin>>a>>op>>b;
if (op=='+')
{
cout<<a+b;
}
else if (op=='-')
{
cout<<a-b;
}
else if (op=='/')
{
if (b==0)
{
    cout<<"invalid output";
}
else
{
 cout<<a/b;
}
}

else if (op=='*')
{
cout<<a*b;
}
else
cout<<"invalid output";
return 0;
}