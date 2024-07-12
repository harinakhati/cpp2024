/*Create a class Room with instance variables length and breadth. 
Add one function getArea () that returns the area of the room. 
Create a subclass MyRoom and add one instance variable height. 
Add one function getVolume () that returns the volume. 
From main () function create two MyRoom objects and 
find area and volumes of both rooms.*/
#include<iostream>
using namespace std;
class Room
{
    public:
    int length,breadth;
    void getdata()
    {
        cout<<"Enter the length of the room: ";
        cin>>length;
        cout<<"Enter the breadth of the room: ";
        cin>>breadth;
        }
        int getArea()
        {
            return length*breadth;
            }
            };
            class MyRoom:public Room
            {
                private:
                int height;
                public:
                void getdata()
                {
                    Room::getdata();
                    cout<<"Enter the height of the room: ";
                    cin>>height;
                    }
                    int getVolume()
                    {
                        return length*breadth*height;
                        }
                        };
                        int main()
                        {
                            MyRoom room1,room2;
                            room1.getdata();
                            room2.getdata();
                            cout<<"The area of the room1 is: "<<room1.getArea()<<endl;
                            cout<<"The area of the room2 is: "<<room2.getArea()<<endl;
                            cout<<"The volume of the room1 is: "<<room1.getVolume()<<endl;
                            cout<<"The volume of the room2 is: "<<room2.getVolume()<<endl;
                            return 0;
                        }