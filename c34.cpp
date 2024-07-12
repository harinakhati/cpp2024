/*Write a program in C++ that add two complex numbers by overloading binary operator +*/
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
            complex operator+(complex c)
            {
                complex temp;
                temp.real=real+c.real;
                temp.img=img+c.img;
                return temp;
                }
};
int main()
{
    complex c1(3,4);
    complex c2(5,6);
    complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}