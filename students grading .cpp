#include <iostream>
using namespace std;
int main() 
{
int mark[5],A,B,C,D,F,i;
cout<<"enter the mark of each students : ";
for (i=0;i<5;i++)
{
    cin>>mark[i];    
}
int topper=mark[0];
for(i=0;i<5;i++)
{
if (mark[i]>=90 && mark[i]<=100)
{
cout<<"got A GRAGE ";
A++;
}
else if( mark[i]>=75 && mark[i]<=90)
{
cout<<"GOT B GRADE ";
B++;
}
else if( mark[i]>=60 && mark[i]<=75)
{
cout<<"GOT C GRADE ";
C++;
}
else if (mark[i]>=30 $$ mark[i]<=60)
{
cout<<"GOT D GRADE";
D++;
}
else if (mark[i]>=30 $$ mark[i]<=0)
{
cout<<"got f grade";
F++;
}
}
cout<<"no of student got A : "<<A<<endl;
cout<<"no of student got B : "<<B<<endl;
cout<<"no of student got C : "<<C<<endl;
cout<<"no of student got D : "<<D<<endl;
cout<<"no of student got F : "<<F<<endl;
for(i=0;i<5;i++)
{
    if(topper<mark[i])
    {
        topper=mark[i];
    }
}
cout<<"topper's mark : "<<topper<<endl;
return 0;
}