/*Write a function called zeroSmaller () that is passed two int arguments by reference 
and then sets the smaller of two numbers to 0. Write a main () program to exercise this function.*/
#include <iostream>
using namespace std;
void zeroSmaller(int &a, int &b)
{
    if (a < b)
    {
        a= 0;
        }
        else
        {
            b = 0;
            }
            }
            int main()
            {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                zeroSmaller(a, b);
                cout << "The smaller number is: " << "0"<< endl;
                cout << "The number is: " << a << endl;
                cout << "The number is: " << b << endl;
                return 0;
            }

