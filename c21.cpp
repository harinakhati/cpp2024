/*Create a class called employee that contains a name (an array of characters)
and an employee number (type long). Include the member function called getData ()
to read data from the user for insertion into object, and another function called
putData() to display the data. Assume the name has no embedded spaces.
Write a main () program to exercise this class.
It should create an array of type employee and then invite the 
user to input data for up to 100 employees. Finally, it should print out
the data for all employees  
*/
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class employee
{
    private:
    char name[20];
    long int empno;
    public:
    void getData()
    {
    	cout<<"Enter employee number:"<<endl;
    	cin>>empno;
        cout<<"Enter name:"<<endl;
        cin>>name;
       
    }
    void putData()
    {
        cout<<empno <<name<<endl;
    }
};
int main()
{
    employee e[100];
    int i=0;
    while(i<3)
    {
        e[i].getData();
        i++;
        }
        for(int j=0;j<3;j++)
        {
            e[j].putData();
            }
            return 0;
}
