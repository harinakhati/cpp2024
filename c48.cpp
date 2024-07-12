/*Write a program in C++ to convert an object of one class into an object of 
another class using conversion routine in destination class*/
#include<iostream>
#include<math.h>
using namespace std;
class Polar
{
    private:
    double radius, angle;
    public:
    Polar()
    {
        radius=angle=0;
        }
        Polar(double r, double a)
        {
            radius=r;
            angle=a;
            }
            double getAngle()
            {
                return angle;
                }
                double getRadius()
                {
                    return radius;
                    }
            void display()
            {
                cout<<"Radius = "<<radius<<endl;
                cout<<"Angle = "<<angle<<endl;
                }
                };
                class Rect
                {
                    private:
                    double xco,yco;
                    public:
                    Rect()
                    {
                        xco=yco=0;
                        }
                        Rect(double x, double y)
                        {
                            xco=x;
                            yco=y;
                            }
                            Rect(Polar P)
                            {
                                double r,a;
                                r=P.getRadius();
                                a=P.getAngle();
                                xco=r*cos(a);
                                yco=r*sin(a);
                                }
                                void display()
                                {
                                    cout<<"X coordinate = "<<xco<<endl;
                                    cout<<"Y coordinate = "<<yco<<endl;
                                }
                };
                int main()
                {
                    Polar P(10.0,0.78);
                    Rect r;
                    r=P;
                    r.display();
                    return 0;
                }


