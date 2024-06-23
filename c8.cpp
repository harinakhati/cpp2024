#include <iostream>
using namespace std;
float SimpleInterest(float principal, float rate = 2.5, int time = 1) 
{
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate;
    int time;
     cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (default is 2.5%): ";
    cin >> rate;
    cout << "Enter time period in years (default is 1 year): ";
    cin >> time;
    float interest = SimpleInterest(principal, rate, time);
     cout << "Simple Interest = " << interest << endl;
    return 0;
}
