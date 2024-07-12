/*Write a C++ program to add two complex numbers*/
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
            
            complex addcomplexNumber(complex c1)
            {
                complex temp;
                temp.real=real+c1.real;
                temp.img=img+c1.img;
                return temp;
                }
};
int main()
{
    complex c1(3,4);
    complex c2(5,6);
    complex c3;
    c3=c1.addcomplexNumber(c2);
    c3.display();
    return 0;
}