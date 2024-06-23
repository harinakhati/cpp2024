/*Write a C++ program to read three numbers and print the following results
a.	Sum of the values.
b.	Average of three values.
c.	Largest of the three.
d.	Smallest of the three.
*/

#include <iostream>
using namespace std;
int sum(int a, int b, int c){
    return a+b+c;
}
int avg(int a, int b, int c){
    return (a+b+c)/3;
}
int large(int a, int b, int c){
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
    }
    int small(int a, int b, int c){
        if(a<b && a<c)
        return a;
        else if(b<a && b<c)
        return b;
        else
        return c;
        }
        int main(){
            int a, b, c;
            cout << "Enter three numbers: ";
            cin >> a >> b >> c;
            cout << "Sum of the values: " << sum(a, b, c) << endl;
          cout  << "Average of three values: " << avg(a, b, c) << endl;
           cout << "Largest of the three: " << large(a, b, c) << endl   ;
          cout  << "Smallest of the three: " << small(a, b, c) << endl;
            return 0;
        }
