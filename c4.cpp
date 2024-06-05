#include <iostream>
using namespace std;
int main() {
    int n,temp;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
     if(n%i==0)
     temp++;
    }
     if(temp==2)
     {
        cout<<"prime";
     }
     else
     {
        cout<<"composite";
    }
    
    return 0;
}
