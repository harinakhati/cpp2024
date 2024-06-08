// Prime numbers between 300 to 500
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
        for(int i = 300; i <= 500; i++)
	{
				if(Prime(i)) 
		{
			cout << i << " ";
		}
	}
	return 0;
}
