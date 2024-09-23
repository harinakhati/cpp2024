//Write an object to file
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee
{
	private:
		int eid;
		char name[20];
		int salary;
	public:
		void read()
		{
			cout<<"Enter eid, name and salary"<<endl;
			cin>>eid>>name>>salary;
		}
		void display()
		{
			cout<<"EID = "<<eid<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Salary = "<<salary<<endl;
		}
};
int main()
{
	fstream file;
	Employee e;
	file.open("D:\\Utshah C++\\file2.rec",ios::in|ios::out|ios::trunc);
	if(file.fail())
	{
		cout<<"File not opened"<<endl;
		return 1;
	}
	cout<<"File opened"<<endl;

		e.read();
		file.write((char*)&e, sizeof(e));
	cout<<"\nOne record written to file\n"<<endl;
	file.seekg(0);
	cout<<"Reading from file...\n"<<endl;
	file.read((char*)&e, sizeof(e));
	e.display();
}
