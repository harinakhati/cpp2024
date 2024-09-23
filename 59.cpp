//WAP in C++ to implement tempolate class
#include<iostream>
using namespace std;
#define N 5
template<class T>
class Stack
{
	private:
		T stk[N];
		T top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(T el)
		{
			if(top==N-1)
				cout<<"Stack full."<<endl;
			else
				stk[++top]=el;
		}
		T pop()
		{
			int a;
			if (top==-1)
				cout<<"Empty stack."<<endl;
			else
			{
				a=stk[top];
				stk[top]=0;
				top--;
			}
			return a;
		}
		void print()
		{
			for(int i=top; i>=0; i--)
				cout<<stk[i]<<endl;
		}
};
int main()
{
	Stack <int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<"The popped element is "<<s.pop()<<endl;
	s.print();
	Stack <char>s1;
	s1.push('C');
	s1.push('B');
	s1.push('A');
	s1.print();
	return 0;
}
