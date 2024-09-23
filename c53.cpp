/* Write a C++ program to demonstrate multiple catch statements */
#include<iostream>
using namespace std;
int main()
{
    int x;
cout<<"Enter a number between 1-100 and test your luck: "<<endl;
        cin>>x;
    try {

        if (x == 12) {
            throw "Jackpot!"; 
        }
        else {
            throw "Bad Luck!";  // Throw a char exception
        }
        
    }
    catch (const char* msg) {
        cout << "Result:  " << msg << endl;
    }
    catch (const char* msg) {
        cout << "Result: " << msg << endl;
    }
    return 0;
}
