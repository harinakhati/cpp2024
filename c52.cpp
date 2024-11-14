//	Write a C++ program to handle divide by zero exception
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	try
	{
		if(b==0) 
			throw(b);
		c=a/b;
		cout<<a<<"/"<<b<<"="<<c<<endl;
	}
	catch(int exp)
	{
		cout<<"A serious problem called zero exception occured"<<endl;
	}
	cout<<"End of program"<<endl;
	return 0;
}
