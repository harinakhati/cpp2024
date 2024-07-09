/*Create class named ‘student’ with member ‘rollno’, ‘name’ and ‘marks’.
Write a C++ program that reads records of three students and then display 
that information on monitor.*/
#include<iostream>
using namespace std;
class student
{
    private:
     int rollno;
     char name[20];
     float marks;
     public:    
     void getdata()
     {
        cout<<"Enter rollno: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
        }
        void display()
        {
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
            }
            };
            int main()
            {
                student s1,s2,s3;
                s1.getdata();
                s2.getdata();
                s3.getdata();
                s1.display();
                s2.display();
                s3.display();
                return 0;
                }