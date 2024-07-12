/*Write a program in C++ to concatenate two string by overloading
binary operator ‘+’ using friend function*/
#include<iostream>
#include<string.h>
using namespace std;

class String
{
    private:
        int len;
        char *s;
    public:
        String(){
            len=0;
            s=new char(len+2);
            strcpy(s," ");
        }
        String (char *n)
        {
            len=strlen(n);
            s=new char(len+2);
            strcpy(s,n);
        }
        void display()
        {
            cout<<s<<endl;
        }
        friend String operator+(String &s1,String &s2);
};

String operator+(String &s1,String &s2)
{
    String temp;
    temp.len=s1.len+s2.len;
    temp.s=new char(temp.len+2);
    strcpy(temp.s,s1.s);
    strcat(temp.s," ");
    strcat(temp.s,s2.s);
    return temp;
}
int main()
{
    String s1("Hello");
    String s2("World");
    String s3;
    s3=s1+s2;
    s3.display();
    return 0;
}