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
                        friend DB operator+(DB a,DB b);
                        };
                        DB operator+(DB a,DB b)
                        {
                            DB c;
                            c.f=a.f+b.f;
                            c.i=a.i+b.i;
                            if(c.i>=12){
                            	c.f++;
                            	c.i-=12;
							}
                            return c;
                            }
                            DM operator+(DM a,DM b)
                            {
                                DM c;
                                c.m=a.m+b.m;
                                c.c=a.c+b.c;
                                if(c.c>=100)
                                {
                                	c.m++;
                                	c.c-=100;
								}
                                return c;
                            }
                            int main()
                            {
                                DM d1,d2,d3;
                                DB d4,d5,d6;
                                d3=d1+d2;
                                d6=d4+d5;
                                d3.display();
                                d6.display();
                                return 0;
                            }
