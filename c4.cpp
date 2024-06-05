#include <iostream>
using namespace std;
int main() {
    int n,temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
     temp=n%i;
     if(temp==2)
     {
        cout<<"prime";
     }
     else
     {
        cout<<"composite";
    }
    }
    return 0;
}