/* Write C ++ program to demonstrate "this" pointer */
#include<iostream>
using namespace std;
class Person
{
private:
    int age;
public:
    Person()
    {
        age=0;
    }
   Person(int a)
   {
    age=a;
   }    
   void display()
   {
    cout<<"Age is "<<age<<endl;
   }
   Person compareAge(Person P)
   {
    if(age>P.age)
    {
        return *this;
    }
    else
    {
        return P;
        }
   }

};
   int main()
   {
    Person P1(20);
    Person P2(30);
    Person P3;
    P3=P1.compareAge(P2);
    cout<<"Younger Person"<<endl;
    P3.display();
    return 0;
   }
