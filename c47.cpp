/*Write a program in C++ to convert an object of one class into an object of 
another class using conversion routine in source class*/
#include<iostream>
#include<math.h>
using namespace std;
class Rect
{
    private:
    double xco,yco;
    public:
    Rect()
    {
        xco=yco=0;
        }
        Rect(double x,double y)
        {
            xco=x;
            yco=y;
            }
            void display()
            {
                cout<<"("<<xco<<","<<yco<<")"<<endl;
                }
};
class Polar
{
    private:
    double radius, angle;
    public:
    Polar()
    {
        radius=angle=0;
        }
        Polar(double r,double a)
        {
            radius=r;
            angle=a;
            }
            void display()
            {
                cout<<"("<<radius<<","<<angle<<")"<<endl;
                }
                operator Rect()
                {
                    double x,y;
                    x=radius*cos(angle);
                    y=radius*sin(angle);
                    Rect temp(x,y);
                    return temp;
                    }
};
int main()
{
    Polar p(3,0.5);
    Rect r=p;
    r.display();
    return 0;
}
