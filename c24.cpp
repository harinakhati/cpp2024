/*Create two classes DM and DB which store the value of distances.
DM stores distances in meters and centimeters and DB in feet and inches.
Write a program that can read values for the class objects and add one 
object of DM with another object of DM. Use friend function to carry out
the addition operation. The object that stores the results may be a DM object 
or DB object, depending on the units in which the results are required. 
The display should in the format of feet and inches or meters and centimeters
depending on the object on display.*/
#include<iostream>
using namespace std;
class DM
{
    private:
       int m,c;
       public:
       void getdata()
       {
        cout<<"Enter the value of meters and centimeters"<<endl;
        cin>>m>>c;
        }
        void display()
        {
            cout<<"The value of meters and centimeters is "<<m<<"m "<<c<<"cm"<<
            endl;
            }
            friend DM operator+(DM a,DM b);
            };
            class DB
            {
                private:
                int f,i;
                public:
                void getdata()
                {
                    cout<<"Enter the value of feet and inches"<<endl;
                    cin>>f>>i;
                    }
                    void display()
                    {
                        cout<<"The value of feet and inches is "<<f<<"ft "<<i<<"in"<<
                        endl;
                        }
                        friend DB operator+(DB d,DB e);
                        };
                        DB operator+(DB d,DB e)
                        {
                            DB f;
                            f.f=d.f+e.f;
                            f.i=d.i+e.i;
                           
                            if(f.i>=12)
                            {
                            f.f=f.f+f.i/12;
                             f.i=f.i%12;
                             }
                            return f;
                            }
                            DM operator+(DM a,DM b)
                            {
                                DM c;
                                c.m=a.m+b.m;
                                c.c=a.c+b.c;
                               
                                 if(c.c>=100)
                                {
                                 c.m=c.m+c.c/100;
                                 c.c=c.c%100;
                                 }
                                return c;
                            }
                            int main()
                            {
                                DM a,b,c;
                                DB d,e,f;
                                a.getdata();
                                b.getdata();
                                c=a+b;
                                d.getdata();
                                e.getdata();
                                f=d+e;
                                c.display();
                                f.display();
                                return 0;
                            }