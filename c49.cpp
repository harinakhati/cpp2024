/* Write a C++ program to demonstrate function overriding*/
#include <iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"This is class A"<<endl;
    }
};
class B : public A
{
    public:
    void show()
    {
        cout<<"This is class B"<<endl;
    }
};
int main()
{
    A a;
    B b;
    b.show();
    return 0;
    
}
