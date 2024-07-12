/*Write a program in C++ that overloads unary operator -*/
#include<iostream>
using namespace std;
class Space
{
    private:
    int x,y,z;
    public:
    Space()
    {
        x=y=z=0;
        }
        Space(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
            }
            void display()
            {
                cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
                }
                void operator -()
                {
                   x=-x;
                   y=-y;
                   z=-z;
                    }
};
int main()
{
    Space s(1,2,3);
    -s;
    s.display();
    return 0;
}