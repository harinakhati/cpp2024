//Write a C++ program to implement constructor overloading
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    Complex()
    {
        real=img=0;
    }
    Complex(int r)
    {
        real=r;
        img=0;
    }
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    Complex addcomplexNumber(Complex c2)
    {
        Complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;
    }
};
int main()
{
    Complex c1(2);
    Complex c2(2,4);
    Complex c3;
    c3=c1.addcomplexNumber(c2);
    c3.display();
    return 0;
}
