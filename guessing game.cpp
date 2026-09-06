#include<iostream>
using namespace std;
int main ()
{
    int secret=7;
    int guess;
    cout<<"enter the secret number : ";
    cin>>guess;
    if (guess!=secret)
    {
    while(guess!=secret)
    {
    if (guess>secret)
    {
        cout<<"too high"<<endl;
        cout<<"try another : ";
        cin>>guess;
    }
    else if (guess<secret)
    {
        cout<<"too low"<<endl;
        cout<<"try another : ";
        cin>>guess;
    }
    }
    }
    cout<<"yes its secret one";

    return 0;
}