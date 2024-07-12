/*Write a program in C++ that adds two distances (feet, inch) by overloading binary operator +*/
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet,inch;
    public:
    Distance()
    {
        feet=inch=0;
        }
        Distance(int f,int i)
        {
            feet=f;
            inch=i;
            }
            void display()
            {
                cout<<"feet="<<feet<<endl<<"inch="<<inch<<endl;
                }
                Distance operator +(Distance d)
                {
                    Distance temp;
                    temp.feet=feet+d.feet;
                    temp.inch=inch+d.inch;
                    if(temp.inch>=12)
                    {
                        temp.feet+=temp.inch/12;
                        temp.inch=temp.inch%12;
                        }
                        return temp;
                        }
};
                        int main()
                        {
                            Distance d1(10,11);
                            Distance d2(20,21);
                            Distance d3;
                             d3=d1+d2;
                            d3.display();
                            return 0;
                        }
