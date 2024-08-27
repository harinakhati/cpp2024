/* Write a C++ program to handle divide by zero exception */
#include <iostream>
// #include <stdexcept>
using namespace std;
int main()
{
    float num1,num2,result;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    try
    {
        if(num2!=0)
        {
            result=num1/num2;
            cout<<"Result: "<<result;
        }
        else
        {
            throw num2;
    }
    catch(num2 e)
    {
        cout<<"The divisor must be non-zero value";
        cout<<endl<<"Try again for another divisor";
    }
    return 0;
}
