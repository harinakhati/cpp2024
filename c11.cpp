//Write a program in C++ to find product of two numbers using recursive function
#include <iostream>
using namespace std;
int product(int a, int b)
{
    if(b==1)
    {
        return a;
    }
    else
    {
        return a + product(a, b-1);
        }
}
int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Product of two numbers is: " << product(a, b);
    return 0;
    }


