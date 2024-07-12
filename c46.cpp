/*Write a program in C++ to add two times (hr, min, sec) objects by 
overloading + operator using friend function*/
#include<iostream>
using namespace std;
class Time
{
    private:
    int hr,min,sec;
    public:
    Time()
    {
        hr=min=sec=0;
    }
    Time(int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
        }
        void display()
        {
            cout<<"Time is "<<hr<<":"<<min<<":"<<sec<<endl;
            }
             friend Time operator +(Time t1, Time t2);
             };
             Time operator +(Time t1,Time t2 )
            {
                Time temp;
               temp.hr=t1.hr+t2.hr;
               temp.min=t1.min+t2.min;
               temp.sec=t1.sec+t2.sec;
                if(temp.sec>=60)
                {
                    temp.min=temp.min+temp.sec/60;
                    temp.sec=temp.sec%60;
                    }
                    if(temp.min>=60)
                    {
                        temp.hr=temp.hr+temp.min/60;
                        temp.min=temp.min%60;
                        }
                        return temp;
                        }
                        int main()
                        {
                            Time t1(1,40,50);
                            Time t2(2,40,50);
                            Time t3(0,0,0);
                            t3=t1+t2;
                            t3.display();
                            return 0;
                        }