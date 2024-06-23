//Write a program in C++ to find sum of digits of a number using recursive function
#include <iostream>
using namespace std;
int digitsum(int a)
{
    if(a<10)
    {
        return a;
    }
    else
    {
        return a%10+digitsum(a/10);
        }
}
int main()
{
    int a;
    cout << "Enter a numbers: ";
    cin >> a;
    cout << "sum of a digit is " << digitsum(a);
    return 0;
    }