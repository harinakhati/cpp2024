//Write a C++ program that read that finds cube of a number using inline function
#include<iostream>
using namespace std;
inline int cube(int x)
{
    return x*x*x;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube of " << num << " is: " << cube(num);
    return 0;
    }
    
