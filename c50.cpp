 /*Write a C++ program to demonstrate virtual function*/
 #include<iostream>
 using namespace std;
 class A
 {
    public:
    void showA()
    {
        cout<<"class A"<<endl;
    }
 };
 class B : virtual public A
 {
    public:
    void showB()
    {
        cout<<"class B"<<endl;
    }
 };
 class C:public virtual A
 {
    public:
    void showC()
    {
        cout<<"class C"<<endl;
    }
 };
 class D:public B, public C
 {
    public:
    void display()
    {
        cout<<"class D"<<endl;
    }
 };
 int main()
 {
    D d;
    d.showA();
    d.showB();
    d.display();
    return 0;
 }
