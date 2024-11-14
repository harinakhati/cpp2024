# include <iostream> 
using namespace std; 
 
class Complex 
{ 
int r; 
public: 
Complex (int r) 
{ 
this ->r=r; 
} 
void input() 
{ 
cout << "\n Enter the value of r:"; 
cin >> this -> r; 
} 
void display() 
{ 
cout <<"\n Value of r:" << r << endl; 
} 
//Complex add( Complex C1, Complex C2) 
Complex add( Complex c) 

{ 
//r= C1.r + C2.r; 
r=r + c.r; 
return (* this); 
} 
}; 
 
int main() 
{ 
//Complex a1(1), a2(2), a3(0), a4(0); 
Complex c1(1), c2(2),c3(0);
c1.input();
c2.input();
c3=c1.add(c2);
c3.display();
//a1.input(); 
//a2.input(); 
//a4= a3.add(a1, a2); 
//a3.display(); 
//a4.display();
return 0; 
} 
