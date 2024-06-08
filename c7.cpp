//simple interest using default argument function
#include<iostream>
using namespace std;
float interest(float p,float t, float r=1.2)
{
    return (p*t*r)/100;
}
int main()
{
    float p,t;
    cout<<"Enter the value of p,t"<<endl;
    cin>>p>>t;
    cout<<"The interest is : "<<interest(p,t)<<endl;
    return 0;
}
