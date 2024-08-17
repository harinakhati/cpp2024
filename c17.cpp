/*Write a function power () to raise a number m to a power n.
The function takes a double value for m and int value for n, and returns the result correctly. 
Use a default value of 2 for n to make the function to calculate squares when this argument is omitted. 
Write a main that gets the value of m and n from the user to test the function.*/
#include<iostream>
using namespace std;
double power(double m,int n=2)
{
    double result=1;
    for(int i=1;i<=n;i++)
    {
        result=result*m;
        }
        return result;
        }
        int main()
        {
            double m;
            int n=2;
            cout<<"Enter the value of m: ";
            cin>>m;
//            cout<<"Enter the value of n: ";
//            cin>>n;
            cout<<"The result is: "<<power(m,n);
            return 0;
        }
