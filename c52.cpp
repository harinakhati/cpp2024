/* Write a C++ program to handle divide by zero exception */
#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter numbers"<<endl;
    cin>>a>>b;
    try
    {
        if(b=0)
        throw(b);
        c=a/b;
        cout<<a<<"/"<<b<<"="<<c<<endl;
        }
        catch(int exp)
    {
       cout<<"A problem called by zero occured"<<endl;
    }
    cout<<"End of Program"<<endl;
    return 0;
    }