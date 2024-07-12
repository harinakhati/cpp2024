/*Write a program in C++ that finds product two complex numbers by overloading 
binary operator *  using friend function*/
#include <iostream>
using namespace std;
class complex
{
    private:
    int real,img;
    public:
    complex()
    {
        real=img=0;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;
        }
        void display()
        {
            cout<<"The complex number is "<<real<<" + "<<img<<"i"<<endl;
            }
          friend complex operator *(complex c1,complex c2);
          };
          complex operator *(complex c1,complex c2)
            {
                complex temp;
                temp.real=c1.real*c2.real+c1.img*c2.img;
                temp.img=c1.real*c2.img+c1.img*c2.real;
                return temp;
                }
int main()
{
    complex c1(3,4);
    complex c2(5,6);
    complex c3;
    c3=c1*c2;
    c3.display();
    return 0;
}