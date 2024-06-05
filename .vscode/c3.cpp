#include<iostream>
#define PI 3.1416
using namespace std;
float area(float r)
{
    return PI*r*r;
}
float circumference(float r)
{
    return 2*PI*r;
}
int main()
{
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is: " << area(radius) << endl;
    cout << "The circumference of the circle is: " << circumference(radius) << endl;
    return 0;
}