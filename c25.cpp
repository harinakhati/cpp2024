/*Create a USMoney class with two integer instance variables dollars and cents. 
Add a constructor with two parameters for initializing a USMoney object. 
The constructor should check that the cent value is between 0 and 99 and, 
if not, transfer some cents to the dollars variables to make it between 0 and 99. 
For example, if x is a USMoney object with 5 dollars and 80 cents, and 
if y is a USMoney object with 1 dollar and 90 cents, then 
x.plus(y) will return a new USMoney object with 7 dollars and 70 cents. 
From a main () function create two objects of USMoney class and add them.*/
#include <iostream>
using namespace std;
class USMoney
{
    private:
    int dollars, cents;
    public:
    USMoney(){
        dollars = 0;
        cents = 0;
    }
    USMoney(int d, int c)
    {
        dollars = d;
        cents = c;
        if(cents > 99)
        {
            cents = cents - 100;
            dollars = dollars + 1;
            }
            }
            void display()
            {
                cout << dollars << " dollars and " << cents << " cents" << endl;
                }
                USMoney operator +(USMoney m)
                {
                    USMoney temp;
                    temp.dollars = dollars + m.dollars;
                    temp.cents = cents + m.cents;
                    if(temp.cents > 99)
                    {
                        temp.cents = temp.cents - 100;
                        temp.dollars = temp.dollars + 1;
                        }
                        return temp;
                        }
};
                        int main()
                        {
                            USMoney m1(5,80);
                            USMoney m2(1,90);
                            USMoney m3 = m1 + m2;
                            m3.display();
                            return 0;
                        }