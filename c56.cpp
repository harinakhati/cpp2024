//WAP to write line of text to a file.
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	fstream file;
	char ch;
	char str[]={"abcdefghijklmnopqrstuvwxyz"};
	int len;
	file.open("D:\\Harina Khati\\cpp2024\\file1.txt",ios::in|ios::out|ios::trunc);
	if(file.fail())
	{
		cout<<"File not created for some reason"<<endl;
		return 1;
	}
	len=strlen(str);
	cout<<"File opened"<<endl;
	for(int i=0;i<len;i++)
	{
		file.put(str[i]);
	}
	cout<<"Message written to file"<<endl;
	
}
