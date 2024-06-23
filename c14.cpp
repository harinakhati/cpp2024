/*Write a program in C++to compute the area of circle and area of triangle 
by overloading the area () function. */
#include <iostream>
using namespace std;
float area(float r){
    return 3.14*r*r;
}
float area(float b, float h){
    return 0.5*b*h;
    }
    int main(){
        float r,b,h;
        cout << "Enter radius of circle : ";
        cin >> r;
        cout << "Area of circle: " << area(r) << endl;
        cout << "Enter base and height of triangle : ";
        cin >> b >> h;
        cout << "Area of triangle: " << area(b, h) << endl;
        return 0;
        }
