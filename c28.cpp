/*Create a class Box with instance variables length, breadth and height.
Add one function getVolume () to compute the volume of box. 
Use suitable constructors. Create a subclass BoxWeight and 
add one variable weight. Add one function getWeight () 
that displays the weight of box to this class. 
Add suitable constructors. Create one more subclass class Shipment 
from BoxWeight.  Add one function getCost () that displays the cost
of the box. Add suitable constructors. From main () function create
an object of Shipment that initializes the instance variables through constructor.*/
#include<iostream>
using namespace std;
class Box
{
    public:
    int length,breadth,height;
    Box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
        }
        int getVolume()
        {
            return length*breadth*height;
            }
            };
            class BoxWeight:public Box
            {
                public:
                int weight;
                BoxWeight(int l,int b,int h,int w):Box(l,b,h)
                {
                    weight=w;
                    }
                    int getWeight()
                    {
                        return weight;
                        }
                        };
                        class Shipment:public BoxWeight
                        {
                            public:
                            int cost;
                            Shipment(int l,int b,int h,int w,int c):BoxWeight(l,b,h,w)
                            {
                                   cost=c;
                                }
                                int getCost()
                                {
                                    return cost;
                                }
                                 void display()
                                         {
                                         cout << "Length: " << length << endl;
                                         cout << "Breadth: " << breadth << endl;
                                         cout << "Height: " << height << endl;
                                         cout << "Weight: " << getWeight() << endl;
                                         cout << "Volume: " << getVolume() << endl;
                                         cout << "Cost: " << getCost() << endl;
                                         }
                                };
                                int main()
                                {
                                    Shipment s(10,20,30,40,50);
                                    s.display();
                                    return 0;
                                }

