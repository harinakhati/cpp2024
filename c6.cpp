#include <iostream>
using namespace std;
bool Prime(int n )
{
		if(n == 1 || n == 0)
         return false;

for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
         return false;
	}
		return true;
}
int main()
{
    int n1,n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    if (n1 > n2) {
        cout << "Error: n1 should be less than n2." << endl;
        return 1;
    }
   for(int i=n1;i<=n2;i++)
   {
   {
				if(Prime(i)) 
		{
			cout << i << " ";
		}
	}
   }
	return 0;
}
