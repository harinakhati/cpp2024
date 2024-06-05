#include <iostream>
using namespace std;

int Reverse(int num, int rev){
    if(num == 0)
        return rev;
    
    int rem = num % 10;
    rev = rev * 10 + rem;
    
    return Reverse(num / 10, rev);
}

int main ()
{
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number is: " << num; 
       
    cout << "\nReverse: " << Reverse(num, rev);
}