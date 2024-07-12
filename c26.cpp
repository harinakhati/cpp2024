/*Create a class Box with fields width, height and depth. 
Add methods getArea () and getVolume (). 
Use suitable constructors. From main () function create an 
object of Box class and find its area as volume*/
#include<iostream>
using namespace std;
class Box
{
    private:
    int width,height,depth;
    public:
    Box()
    {
        width=height=depth=0;
        }
        Box(int w,int h,int d)
        {
            width=w;
            height=h;
            depth=d;
            }
            int getArea()
            {
                return 2*(width*height+height*depth+width*depth);
                }
                int getVolume()
                {
                    return width*height*depth;
                    }
                    void display()
                    {
                        cout<<"Area of the box is "<<getArea()<<endl;
                        cout<<"Volume of the box is "<<getVolume()<<endl;
                        }
                        };
                        int main()
                        {
                            Box b1;
                            Box b2(10,20,30);
                            b1.display();
                            b2.display();
                            return 0;
                            }
                            